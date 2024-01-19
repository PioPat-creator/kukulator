#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_kukulator.h"

class kukulator : public QMainWindow
{
    Q_OBJECT

public:
    kukulator(QWidget *parent = nullptr);
    ~kukulator();
    QPushButton* numButtons[10];
    QPushButton* hexButtons[6];
    QPushButton* binButtons[2];

private:
    Ui::kukulatorClass ui;
private slots:
    void NumPressed();
    void MathPressed();
    void EqualPressed();
    void BinButtonPressed();
    void HexButtonPressed();
    void DecButtonPressed();
    void ClearPressed();
};
