/********************************************************************************
** Form generated from reading UI file 'placebetevent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEBETEVENT_H
#define UI_PLACEBETEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_PlaceBetEvent
{
public:
    QFrame *SendCoins;
    QHBoxLayout *gridLayout;
    QLabel *labelCoinControlAutomaticallySelected;
    QSpacerItem *horizontalSpacerCoinControl;
    QPushButton *pushButtonPlaceHomeBet;
    QPushButton *pushButtonPlaceAwayBet;
    QPushButton *pushButtonPlaceDrawBet;

    void setupUi(QStackedWidget *PlaceBetEvent)
    {
        if (PlaceBetEvent->objectName().isEmpty())
            PlaceBetEvent->setObjectName(QStringLiteral("PlaceBetEvent"));
        PlaceBetEvent->resize(729, 156);
        PlaceBetEvent->setFocusPolicy(Qt::TabFocus);
        PlaceBetEvent->setAutoFillBackground(false);
        SendCoins = new QFrame();
        SendCoins->setObjectName(QStringLiteral("SendCoins"));
        SendCoins->setFrameShape(QFrame::StyledPanel);
        SendCoins->setFrameShadow(QFrame::Sunken);
        gridLayout = new QHBoxLayout(SendCoins);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelCoinControlAutomaticallySelected = new QLabel(SendCoins);
        labelCoinControlAutomaticallySelected->setObjectName(QStringLiteral("labelCoinControlAutomaticallySelected"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        gridLayout->addWidget(labelCoinControlAutomaticallySelected);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacerCoinControl);

        pushButtonPlaceHomeBet = new QPushButton(SendCoins);
        pushButtonPlaceHomeBet->setObjectName(QStringLiteral("pushButtonPlaceHomeBet"));
        pushButtonPlaceHomeBet->setStyleSheet(QStringLiteral(""));
        pushButtonPlaceHomeBet->setAutoDefault(false);
        pushButtonPlaceHomeBet->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(pushButtonPlaceHomeBet);

        pushButtonPlaceAwayBet = new QPushButton(SendCoins);
        pushButtonPlaceAwayBet->setObjectName(QStringLiteral("pushButtonPlaceAwayBet"));
        pushButtonPlaceAwayBet->setStyleSheet(QStringLiteral(""));
        pushButtonPlaceAwayBet->setAutoDefault(false);
        pushButtonPlaceAwayBet->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(pushButtonPlaceAwayBet);

        pushButtonPlaceDrawBet = new QPushButton(SendCoins);
        pushButtonPlaceDrawBet->setObjectName(QStringLiteral("pushButtonPlaceDrawBet"));
        pushButtonPlaceDrawBet->setStyleSheet(QStringLiteral(""));
        pushButtonPlaceDrawBet->setAutoDefault(false);
        pushButtonPlaceDrawBet->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(pushButtonPlaceDrawBet);

        PlaceBetEvent->addWidget(SendCoins);

        retranslateUi(PlaceBetEvent);

        QMetaObject::connectSlotsByName(PlaceBetEvent);
    } // setupUi

    void retranslateUi(QStackedWidget *PlaceBetEvent)
    {
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("PlaceBetEvent", "Event Details", Q_NULLPTR));
        pushButtonPlaceHomeBet->setText(QApplication::translate("PlaceBetEvent", "Home", Q_NULLPTR));
        pushButtonPlaceAwayBet->setText(QApplication::translate("PlaceBetEvent", "Away", Q_NULLPTR));
        pushButtonPlaceDrawBet->setText(QApplication::translate("PlaceBetEvent", "Draw", Q_NULLPTR));
        Q_UNUSED(PlaceBetEvent);
    } // retranslateUi

};

namespace Ui {
    class PlaceBetEvent: public Ui_PlaceBetEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEBETEVENT_H
