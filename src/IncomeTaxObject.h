/*
 * IncomeTaxObject.h
 *
 *  Created on: Mar 16, 2013
 *      Author: David
 */

#ifndef INCOMETAXOBJECT_H_
#define INCOMETAXOBJECT_H_

#include <QObject>
#include <QMetaType>
#include <string>
#include <stdio.h>
#include <iostream>
#include <QObject>
#include <bb/cascades/AbstractPane>
#include <bb/system/SystemDialog>
#include <bb/system/SystemListDialog>
#include <bb/system/SystemProgressDialog>
#include <bb/system/SystemPrompt>
#include <bb/system/SystemCredentialsPrompt>
#include <bb/system/SystemToast>
#include <bb/system/SystemProgressToast>
#include <bb/system/SystemUiButton>
#include <bb/system/SystemUiInputField>
#include <bb/system/SystemUiError>
#include <bb/system/SystemUiInputMode>
#include <bb/system/SystemUiModality>
#include <bb/system/SystemUiPosition>
#include <bb/system/SystemUiProgressState>
#include <bb/system/SystemUiResult>
#include <bb/system/SystemUiReturnKeyAction>

using namespace bb::system;
class IncomeTaxObject : public QObject {

	Q_OBJECT
	Q_PROPERTY(QString annualIncome READ getAnnualIncome WRITE setAnnualIncome NOTIFY annualIncomeChanged)
	Q_PROPERTY(int province READ getProvince WRITE setProvince NOTIFY provinceChanged)
	Q_PROPERTY(QString afterTaxIncome READ getAfterTaxIncome WRITE setAfterTaxIncome NOTIFY afterTaxIncomeChanged)
    Q_PROPERTY(QString averageTaxRate READ getAverageTaxRate WRITE setAverageTaxRate NOTIFY averageTaxRateChanged)
    Q_PROPERTY(QString totalIncomeTax READ getTotalIncomeTax WRITE setTotalIncomeTax NOTIFY totalIncomeTaxChanged)

public:
	IncomeTaxObject();
	virtual ~IncomeTaxObject();

    Q_INVOKABLE void calculate();
    Q_INVOKABLE void reset();

	void setAnnualIncome(QString i);
	QString getAnnualIncome();
	void setProvince(int i);
	int getProvince();
	void setAfterTaxIncome(QString i);
	QString getAfterTaxIncome();
	void setAverageTaxRate(QString i);
	QString getAverageTaxRate();
	void setTotalIncomeTax(QString i);
	QString getTotalIncomeTax();

signals:
	void annualIncomeChanged(QString);
	void provinceChanged(int);
	//void incomeTaxChanged(QString);
	void afterTaxIncomeChanged(QString);
	void averageTaxRateChanged(QString);
	void totalIncomeTaxChanged(QString);

private:
	struct ProvinceStruct
	{
	   QString provinceName;
	   int taxTiers;
	   double provinceCredit;
	   double percent [5];
	   double amount [5];
	};

	QString m_iAnnualIncome;
	int m_iProvince;
	QString m_iAfterTaxIncome;
	QString m_iAverageTaxRate;
	QString m_iTotalIncomeTax;
	double federalTaxCredit;
    ProvinceStruct m_iProvinceStruct [13];
	double calculateFederalTax(double, int);
	double calculateProvincialTax(double, int);
	QString formatCommas(QString);
};

#endif /* INCOMETAXOBJECT_H_ */
