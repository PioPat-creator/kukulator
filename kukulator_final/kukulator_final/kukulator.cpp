#include "kukulator.h"
#include "ui_kukulator.h"
#include <QMessageBox>

bool divide_but = false;
bool multiplication_but = false;
bool plus_but = false;
bool minus_but = false;
bool dec_but = false;
bool hex_but = false;
bool bin_but = false;

float calcVal = 0.0;



kukulator::kukulator(QWidget* parent) : QMainWindow(parent) {
    ui.setupUi(this);

    ui.lineEdit->setText(QString::number(calcVal));

    // Connect number buttons
    for (int i = 0; i < 10; ++i) {
        QString butName = "b_" + QString::number(i);
        numButtons[i] = kukulator::findChild<QPushButton*>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }


    // Connect math operation buttons
    connect(ui.b_plus, SIGNAL(released()), this, SLOT(MathPressed()));
    connect(ui.b_minus, SIGNAL(released()), this, SLOT(MathPressed()));
    connect(ui.b_multiply, SIGNAL(released()), this, SLOT(MathPressed()));
    connect(ui.b_devide, SIGNAL(released()), this, SLOT(MathPressed()));

    // Connect equals button
    connect(ui.b_equals, SIGNAL(released()), this, SLOT(EqualPressed()));
    // Connect clear button
    connect(ui.b_clear, SIGNAL(released()), this, SLOT(ClearPressed()));

    // Connect system buttons
    connect(ui.b_dec, SIGNAL(released()), this, SLOT(DecButtonPressed()));
    connect(ui.b_hex, SIGNAL(released()), this, SLOT(HexButtonPressed()));
    connect(ui.b_bin, SIGNAL(released()), this, SLOT(BinButtonPressed()));
}

kukulator::~kukulator() {}

void kukulator::NumPressed() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString butVal = button->text();
    QString displayVal = ui.lineEdit->text();

    if ((displayVal.toFloat() == 0) || (displayVal.toFloat() == 0.0)) {
        ui.lineEdit->setText(butVal);
    }
    else {
        QString newVal = displayVal + butVal;
        float floatNewVal = newVal.toFloat();
        ui.lineEdit->setText(QString::number(floatNewVal));
    }
}

void kukulator::MathPressed() {
    divide_but = false;
    multiplication_but = false;
    plus_but = false;
    minus_but = false;

    // Store current value in Display
    QString displayVal = ui.lineEdit->text();
    calcVal = displayVal.toFloat();

    // Sender returns a pointer to the button pressed
    QPushButton* button = qobject_cast<QPushButton*>(sender());

    // Get math symbol on the button
    QString butVal = button->text();

    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        divide_but = true;
    }
    else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
        multiplication_but = true;
    }
    else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        plus_but = true;
    }
    else {
        minus_but = true;
    }

    // Clear display
    ui.lineEdit->clear();
}

void kukulator::EqualPressed() {
    // Holds new calculation
    float solution = 0.0;

    // Get value in display
    QString displayVal = ui.lineEdit->text();
    float floatDisplayVal = displayVal.toFloat();

    // Make sure a math button was pressed
    if (plus_but || minus_but || multiplication_but || divide_but) {
        if (plus_but) {
            solution = calcVal + floatDisplayVal;
        }
        else if (minus_but) {
            solution = calcVal - floatDisplayVal;
        }
        else if (multiplication_but) {
            solution = calcVal * floatDisplayVal;
        }
        else {
            if (floatDisplayVal != 0.0) {
                solution = calcVal / floatDisplayVal;
            }
            else {
                ui.lineEdit->setText("Division by zero!");
                return;
            }
        }
    }
    else {
        // No math operator pressed, just update the display
        solution = floatDisplayVal;
    }

    // Put solution in display
    ui.lineEdit->setText(QString::number(solution, 'g', 16));
}

void kukulator::ClearPressed() {
    ui.lineEdit->clear();
}

void kukulator::DecButtonPressed() {
    ui.lineEdit->clear();
    QString displayVal = ui.lineEdit_dec->text();
    bool ok;
    int decVal = displayVal.toInt(&ok);

    if (ok) {
        // dec to bin
        ui.lineEdit_bin->setText(QString::number(decVal, 2));

        // dec to hex
        ui.lineEdit_hex->setText(QString::number(decVal, 16));
    }
    else {
        ui.lineEdit->setText("Invalid value");
    }
}


void kukulator::HexButtonPressed() {
    ui.lineEdit->clear();
    QString displayVal = ui.lineEdit_hex->text();
    bool ok;
    int hexVal = displayVal.toInt(&ok, 16);

    if (ok) {
        // hex to dec
        ui.lineEdit_dec->setText(QString::number(hexVal));

        // hex to bin
        ui.lineEdit_bin->setText(QString::number(hexVal, 2));
    }
    else {
        ui.lineEdit->setText("Invalid value");
    }
}


void kukulator::BinButtonPressed() {
    ui.lineEdit->clear();
    QString displayVal = ui.lineEdit_bin->text();
    bool ok;
    int binVal = displayVal.toInt(&ok, 2);

    if (ok) {
        // bin to dec
        ui.lineEdit_dec->setText(QString::number(binVal));

        // bin to hex
        ui.lineEdit_hex->setText(QString::number(binVal, 16));
    }
    else {
        ui.lineEdit->setText("Invalid value");
    }
}



