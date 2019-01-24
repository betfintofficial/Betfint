/********************************************************************************
** Form generated from reading UI file 'placebetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEBETDIALOG_H
#define UI_PLACEBETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_PlaceBetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_Header;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *labelOverviewHeaderLeft;
    QSpacerItem *horizontalSpacer_Header;
    QLabel *labelOverviewHeaderRight;
    QFrame *frame_BG;
    QVBoxLayout *layout_BG;
    QFrame *frameCoinControl;
    QVBoxLayout *verticalLayoutCoinControl2;
    QFrame *frameCoinControl_BG;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl1;
    QHBoxLayout *verticalLayout_3;
    QLabel *labelCoinControlFeatures0;
    QSpacerItem *horizontalSpacerCoinControl;
    QLabel *labelCoinControlFeatures1;
    QLabel *labelCoinControlFeatures2;
    QLabel *labelCoinControlFeatures3;
    QHBoxLayout *verticalLayout_4;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *events;
    QSpacerItem *verticalSpacer;
    QFrame *frame_Send;
    QVBoxLayout *verticalLayout5;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QLabel *eventLabel2;
    QLabel *eventLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QLabel *amountLabel;
    BitcoinAmountField *payAmount;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QLabel *warningLabel;
    QSpacerItem *horizontalSpacer2;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QLabel *warningLabel2;
    QLabel *warningLabel1;
    QSpacerItem *horizontalSpacer3;
    QHBoxLayout *horizontalLayout;
    QPushButton *placeBetButton;
    QSpacerItem *horizontalSpacer4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QButtonGroup *groupCustomFee;
    QButtonGroup *groupFee;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QStringLiteral("SendCoinsDialog"));
        SendCoinsDialog->setEnabled(true);
        SendCoinsDialog->resize(978, 695);
        verticalLayout = new QVBoxLayout(SendCoinsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 9);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setSpacing(0);
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        verticalLayout_Master->setContentsMargins(0, 0, 0, 0);
        frame_Header = new QFrame(SendCoinsDialog);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_Header = new QVBoxLayout(frame_Header);
        verticalLayout_Header->setObjectName(QStringLiteral("verticalLayout_Header"));
        verticalLayout_Header->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setSpacing(6);
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        labelOverviewHeaderLeft = new QLabel(frame_Header);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderLeft->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelOverviewHeaderLeft->setFont(font);
        labelOverviewHeaderLeft->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderLeft);

        horizontalSpacer_Header = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer_Header);

        labelOverviewHeaderRight = new QLabel(frame_Header);
        labelOverviewHeaderRight->setObjectName(QStringLiteral("labelOverviewHeaderRight"));
        labelOverviewHeaderRight->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderRight->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(14);
        labelOverviewHeaderRight->setFont(font1);
        labelOverviewHeaderRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderRight);

        horizontalLayout_Header->setStretch(0, 1);
        horizontalLayout_Header->setStretch(2, 1);

        verticalLayout_Header->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_BG = new QFrame(SendCoinsDialog);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        frame_BG->setMinimumSize(QSize(0, 0));
        layout_BG = new QVBoxLayout(frame_BG);
        layout_BG->setObjectName(QStringLiteral("layout_BG"));
        layout_BG->setContentsMargins(6, 6, 6, 0);
        frameCoinControl = new QFrame(frame_BG);
        frameCoinControl->setObjectName(QStringLiteral("frameCoinControl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCoinControl->sizePolicy().hasHeightForWidth());
        frameCoinControl->setSizePolicy(sizePolicy);
        frameCoinControl->setMaximumSize(QSize(16777215, 16777215));
        frameCoinControl->setFrameShape(QFrame::StyledPanel);
        frameCoinControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutCoinControl2 = new QVBoxLayout(frameCoinControl);
        verticalLayoutCoinControl2->setSpacing(0);
        verticalLayoutCoinControl2->setObjectName(QStringLiteral("verticalLayoutCoinControl2"));
        verticalLayoutCoinControl2->setContentsMargins(0, 0, 0, 0);
        frameCoinControl_BG = new QFrame(frameCoinControl);
        frameCoinControl_BG->setObjectName(QStringLiteral("frameCoinControl_BG"));
        verticalLayoutCoinControl = new QVBoxLayout(frameCoinControl_BG);
        verticalLayoutCoinControl->setSpacing(1);
        verticalLayoutCoinControl->setObjectName(QStringLiteral("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setContentsMargins(10, 10, -1, -1);
        horizontalLayoutCoinControl1 = new QHBoxLayout();
        horizontalLayoutCoinControl1->setObjectName(QStringLiteral("horizontalLayoutCoinControl1"));
        horizontalLayoutCoinControl1->setContentsMargins(-1, -1, -1, 15);
        verticalLayout_3 = new QHBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelCoinControlFeatures0 = new QLabel(frameCoinControl_BG);
        labelCoinControlFeatures0->setObjectName(QStringLiteral("labelCoinControlFeatures0"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures0->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures0->setSizePolicy(sizePolicy1);
        labelCoinControlFeatures0->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        labelCoinControlFeatures0->setFont(font2);
        labelCoinControlFeatures0->setStyleSheet(QStringLiteral("font-weight:bold;"));

        verticalLayout_3->addWidget(labelCoinControlFeatures0);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacerCoinControl);

        labelCoinControlFeatures1 = new QLabel(frameCoinControl_BG);
        labelCoinControlFeatures1->setObjectName(QStringLiteral("labelCoinControlFeatures1"));
        labelCoinControlFeatures1->setAlignment(Qt::AlignHCenter);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures1->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures1->setSizePolicy(sizePolicy1);
        labelCoinControlFeatures1->setMinimumSize(QSize(100, 20));
        labelCoinControlFeatures1->setFont(font2);
        labelCoinControlFeatures1->setStyleSheet(QStringLiteral("font-weight:bold;"));

        verticalLayout_3->addWidget(labelCoinControlFeatures1);

        labelCoinControlFeatures2 = new QLabel(frameCoinControl_BG);
        labelCoinControlFeatures2->setObjectName(QStringLiteral("labelCoinControlFeatures2"));
        labelCoinControlFeatures2->setAlignment(Qt::AlignHCenter);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures2->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures2->setSizePolicy(sizePolicy1);
        labelCoinControlFeatures2->setMinimumSize(QSize(100, 20));
        labelCoinControlFeatures2->setFont(font2);
        labelCoinControlFeatures2->setStyleSheet(QStringLiteral("font-weight:bold;"));

        verticalLayout_3->addWidget(labelCoinControlFeatures2);

        labelCoinControlFeatures3 = new QLabel(frameCoinControl_BG);
        labelCoinControlFeatures3->setObjectName(QStringLiteral("labelCoinControlFeatures3"));
        labelCoinControlFeatures3->setAlignment(Qt::AlignHCenter);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures3->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures3->setSizePolicy(sizePolicy1);
        labelCoinControlFeatures3->setMinimumSize(QSize(100, 20));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(100);
        labelCoinControlFeatures3->setFont(font3);
        labelCoinControlFeatures3->setStyleSheet(QStringLiteral("font-weight:bold;"));
        labelCoinControlFeatures3->setContentsMargins(-1, -1, 10, -1);

        verticalLayout_3->addWidget(labelCoinControlFeatures3);


        horizontalLayoutCoinControl1->addLayout(verticalLayout_3);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl1);

        verticalLayout_4 = new QHBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        line = new QFrame(frameCoinControl_BG);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 1));
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setContentsMargins(-1, -1, -1, 10);

        verticalLayout_4->addWidget(line);


        verticalLayoutCoinControl->addLayout(verticalLayout_4);

        scrollArea = new QScrollArea(frameCoinControl_BG);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        events = new QVBoxLayout();
        events->setSpacing(6);
        events->setObjectName(QStringLiteral("events"));

        verticalLayout_2->addLayout(events);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayoutCoinControl->addWidget(scrollArea);


        verticalLayoutCoinControl2->addWidget(frameCoinControl_BG);


        layout_BG->addWidget(frameCoinControl);

        frame_Send = new QFrame(frame_BG);
        frame_Send->setObjectName(QStringLiteral("frame_Send"));
        verticalLayout5 = new QVBoxLayout(frame_Send);
        verticalLayout5->setObjectName(QStringLiteral("verticalLayout5"));
        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName(QStringLiteral("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(-1, -1, -1, 10);
        eventLabel2 = new QLabel(frame_Send);
        eventLabel2->setObjectName(QStringLiteral("eventLabel2"));
        eventLabel2->setAlignment(Qt::AlignLeft|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayoutCoinControl2->addWidget(eventLabel2);

        eventLabel = new QLabel(frame_Send);
        eventLabel->setObjectName(QStringLiteral("eventLabel"));
        eventLabel->setAlignment(Qt::AlignLeft|Qt::AlignTrailing|Qt::AlignVCenter);
        QFont font4;
        font4.setBold(true);
        eventLabel->setFont(font4);

        horizontalLayoutCoinControl2->addWidget(eventLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacer);


        verticalLayout5->addLayout(horizontalLayoutCoinControl2);

        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(8);
        horizontalLayoutCoinControl3->setObjectName(QStringLiteral("horizontalLayoutCoinControl3"));
        horizontalLayoutCoinControl3->setContentsMargins(-1, -1, -1, 10);
        amountLabel = new QLabel(frame_Send);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayoutCoinControl3->addWidget(amountLabel);

        payAmount = new BitcoinAmountField(frame_Send);
        payAmount->setObjectName(QStringLiteral("payAmount"));

        horizontalLayoutCoinControl3->addWidget(payAmount);


        verticalLayout5->addLayout(horizontalLayoutCoinControl3);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(8);
        horizontalLayoutCoinControl4->setObjectName(QStringLiteral("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setContentsMargins(-1, -1, -1, 10);
        warningLabel = new QLabel(frame_Send);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setAlignment(Qt::AlignLeft|Qt::AlignTrailing|Qt::AlignVCenter);
        warningLabel->setFont(font4);

        horizontalLayoutCoinControl4->addWidget(warningLabel);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl4->addItem(horizontalSpacer2);


        verticalLayout5->addLayout(horizontalLayoutCoinControl4);

        horizontalLayoutCoinControl5 = new QHBoxLayout();
        horizontalLayoutCoinControl5->setSpacing(8);
        horizontalLayoutCoinControl5->setObjectName(QStringLiteral("horizontalLayoutCoinControl5"));
        horizontalLayoutCoinControl5->setContentsMargins(-1, -1, -1, 10);
        warningLabel2 = new QLabel(frame_Send);
        warningLabel2->setObjectName(QStringLiteral("warningLabel2"));
        warningLabel2->setAlignment(Qt::AlignLeft|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayoutCoinControl5->addWidget(warningLabel2);

        warningLabel1 = new QLabel(frame_Send);
        warningLabel1->setObjectName(QStringLiteral("warningLabel1"));
        warningLabel1->setText(QStringLiteral("https://t.me/betfintcoin"));
        warningLabel1->setAlignment(Qt::AlignLeft|Qt::AlignTrailing|Qt::AlignVCenter);
        warningLabel1->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayoutCoinControl5->addWidget(warningLabel1);

        horizontalSpacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl5->addItem(horizontalSpacer3);


        verticalLayout5->addLayout(horizontalLayoutCoinControl5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        placeBetButton = new QPushButton(frame_Send);
        placeBetButton->setObjectName(QStringLiteral("placeBetButton"));
        placeBetButton->setMinimumSize(QSize(150, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        placeBetButton->setIcon(icon);
        placeBetButton->setAutoDefault(false);

        horizontalLayout->addWidget(placeBetButton);

        horizontalSpacer4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(frame_Send);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        labelBalance = new QLabel(frame_Send);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy2);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("123.456 BETF"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout5->addLayout(horizontalLayout);


        layout_BG->addWidget(frame_Send);


        verticalLayout_Master->addWidget(frame_BG);

        verticalLayout_Master->setStretch(1, 1);

        verticalLayout->addLayout(verticalLayout_Master);

#ifndef QT_NO_SHORTCUT
        amountLabel->setBuddy(payAmount);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsDialog);

        placeBetButton->setDefault(true);


        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("PlaceBetDialog", "Place Bet", Q_NULLPTR));
        labelOverviewHeaderLeft->setText(QApplication::translate("PlaceBetDialog", "BETTING", Q_NULLPTR));
        labelOverviewHeaderRight->setText(QString());
        labelCoinControlFeatures0->setText(QApplication::translate("PlaceBetDialog", "Betting Options", Q_NULLPTR));
        labelCoinControlFeatures1->setText(QApplication::translate("PlaceBetDialog", "Home", Q_NULLPTR));
        labelCoinControlFeatures2->setText(QApplication::translate("PlaceBetDialog", "Away", Q_NULLPTR));
        labelCoinControlFeatures3->setText(QApplication::translate("PlaceBetDialog", "Draw", Q_NULLPTR));
        eventLabel2->setText(QApplication::translate("PlaceBetDialog", "Betting on:", Q_NULLPTR));
        eventLabel->setText(QApplication::translate("PlaceBetDialog", "Please select an event option", Q_NULLPTR));
        amountLabel->setText(QApplication::translate("PlaceBetDialog", "A&mount:", Q_NULLPTR));
        warningLabel->setText(QApplication::translate("PlaceBetDialog", "A\302\2406% Direct-Chain betting fee is applied to the profit of winning bets.", Q_NULLPTR));
        warningLabel2->setText(QApplication::translate("PlaceBetDialog", "For help visit us on Telegram:", Q_NULLPTR));
        placeBetButton->setText(QApplication::translate("PlaceBetDialog", "P&lace Bet", Q_NULLPTR));
        label->setText(QApplication::translate("PlaceBetDialog", "Balance:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlaceBetDialog: public Ui_PlaceBetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEBETDIALOG_H
