/*
 * IncomeTaxObject.cpp
 *
 *  Created on: Mar 16, 2013
 *      Author: David
 */

#include "IncomeTaxObject.h"

IncomeTaxObject::IncomeTaxObject() {
	m_iProvince = 0;
	m_iAfterTaxIncome = "--";
	m_iAverageTaxRate = "--";
	m_iTotalIncomeTax = "--";

	federalTaxCredit = 11038;

   // Alberta
   m_iProvinceStruct[0].provinceName = "Alberta";
   m_iProvinceStruct[0].provinceCredit = 17593.0;
   m_iProvinceStruct[0].taxTiers = 1;
   m_iProvinceStruct[0].percent[0] = 10.0;
   m_iProvinceStruct[0].amount[0] = 0.0;

   // BC
   m_iProvinceStruct[1].provinceName = "British Columbia";
   m_iProvinceStruct[1].provinceCredit = 10276.0;
   m_iProvinceStruct[1].taxTiers = 5;
   m_iProvinceStruct[1].percent[0] = 5.06;
   m_iProvinceStruct[1].amount[0] = 37568.0;
   m_iProvinceStruct[1].percent[1] = 7.7;
   m_iProvinceStruct[1].amount[1] = 37570.0;
   m_iProvinceStruct[1].percent[2] = 10.5;
   m_iProvinceStruct[1].amount[2] = 11130.0;
   m_iProvinceStruct[1].percent[3] = 12.29;
   m_iProvinceStruct[1].amount[3] = 18486.0;
   m_iProvinceStruct[1].percent[4] = 14.7;

   // Manitoba
   m_iProvinceStruct[2].provinceName = "Manitoba";
   m_iProvinceStruct[2].provinceCredit = 8884.0;
   m_iProvinceStruct[2].taxTiers = 3;
   m_iProvinceStruct[2].percent[0] = 10.8;
   m_iProvinceStruct[2].amount[0] = 31000.0;
   m_iProvinceStruct[2].percent[1] = 12.75;
   m_iProvinceStruct[2].amount[1] = 36000.0;
   m_iProvinceStruct[2].percent[2] = 17.4;

   // New Brunswick
   m_iProvinceStruct[3].provinceName = "New Brunswick";
   m_iProvinceStruct[3].provinceCredit = 9388.0;
   m_iProvinceStruct[3].taxTiers = 4;
   m_iProvinceStruct[3].percent[0] = 9.1;
   m_iProvinceStruct[3].amount[0] = 38954.0;
   m_iProvinceStruct[3].percent[1] = 12.1;
   m_iProvinceStruct[3].amount[1] = 38954.0;
   m_iProvinceStruct[3].percent[2] = 12.4;
   m_iProvinceStruct[3].amount[2] = 48754.0;
   m_iProvinceStruct[3].percent[3] = 14.3;

   //Newfoundland & Labrador
   m_iProvinceStruct[4].provinceName = "Newfoundland & Labrador";
   m_iProvinceStruct[4].provinceCredit = 8451.0;
   m_iProvinceStruct[4].taxTiers = 3;
   m_iProvinceStruct[4].percent[0] = 7.7;
   m_iProvinceStruct[4].amount[0] = 33748.0;
   m_iProvinceStruct[4].percent[1] = 12.5;
   m_iProvinceStruct[4].amount[1] = 33748.0;
   m_iProvinceStruct[4].percent[2] = 13.3;

   //Northwest Territories
   m_iProvinceStruct[5].provinceName = "Northwest Territories";
   m_iProvinceStruct[5].provinceCredit = 13546.0;
   m_iProvinceStruct[5].taxTiers = 4;
   m_iProvinceStruct[5].percent[0] = 5.9;
   m_iProvinceStruct[5].amount[0] = 39453.0;
   m_iProvinceStruct[5].percent[1] = 8.6;
   m_iProvinceStruct[5].amount[1] = 39455.0;
   m_iProvinceStruct[5].percent[2] = 12.2;
   m_iProvinceStruct[5].amount[2] = 49378.0;
   m_iProvinceStruct[5].percent[3] = 14.05;

   //Nova Scotia
   m_iProvinceStruct[6].provinceName = "Nova Scotia";
   m_iProvinceStruct[6].provinceCredit = 8481.0;
   m_iProvinceStruct[6].taxTiers = 5;
   m_iProvinceStruct[6].percent[0] = 8.79;
   m_iProvinceStruct[6].amount[0] = 29590.0;
   m_iProvinceStruct[6].percent[1] = 14.95;
   m_iProvinceStruct[6].amount[1] = 29590.0;
   m_iProvinceStruct[6].percent[2] = 16.67;
   m_iProvinceStruct[6].amount[2] = 33820.0;
   m_iProvinceStruct[6].percent[3] = 17.5;
   m_iProvinceStruct[6].amount[3] = 57000.0;
   m_iProvinceStruct[6].percent[4] = 21.0;

   //Nunavut
   m_iProvinceStruct[7].provinceName = "Nunavut";
   m_iProvinceStruct[7].provinceCredit = 12455.0;
   m_iProvinceStruct[7].taxTiers = 4;
   m_iProvinceStruct[7].percent[0] = 4.0;
   m_iProvinceStruct[7].amount[0] = 41535.0;
   m_iProvinceStruct[7].percent[1] = 7.0;
   m_iProvinceStruct[7].amount[1] = 41536.0;
   m_iProvinceStruct[7].percent[2] = 9.0;
   m_iProvinceStruct[7].amount[2] = 51983.0;
   m_iProvinceStruct[7].percent[3] = 11.5;

   //Ontario
   m_iProvinceStruct[8].provinceName = "Ontario";
   m_iProvinceStruct[8].provinceCredit = 9574.0;
   m_iProvinceStruct[8].taxTiers = 4;
   m_iProvinceStruct[8].percent[0] = 5.05;
   m_iProvinceStruct[8].amount[0] = 39723.0;
   m_iProvinceStruct[8].percent[1] = 9.15;
   m_iProvinceStruct[8].amount[1] = 39725.0;
   m_iProvinceStruct[8].percent[2] = 11.16;
   m_iProvinceStruct[8].amount[2] = 429522.0;
   m_iProvinceStruct[8].percent[3] = 13.16;

   //Prince Edward Island
   m_iProvinceStruct[9].provinceName = "Prince Edward Island";
   m_iProvinceStruct[9].provinceCredit = 7708.0;
   m_iProvinceStruct[9].taxTiers = 3;
   m_iProvinceStruct[9].percent[0] = 9.8;
   m_iProvinceStruct[9].amount[0] = 31984.0;
   m_iProvinceStruct[9].percent[1] = 13.8;
   m_iProvinceStruct[9].amount[1] = 31985.0;
   m_iProvinceStruct[9].percent[2] = 16.7;

   // Quebec
   m_iProvinceStruct[10].provinceName = "Quebec";
   m_iProvinceStruct[10].provinceCredit = 11195.0;
   m_iProvinceStruct[10].taxTiers = 4;
   m_iProvinceStruct[10].percent[0] = 16.0;
   m_iProvinceStruct[10].amount[0] = 41095.0;
   m_iProvinceStruct[10].percent[1] = 20.0;
   m_iProvinceStruct[10].amount[1] = 41095.0;
   m_iProvinceStruct[10].percent[2] = 24.0;
   m_iProvinceStruct[10].amount[2] = 17810.0;
   m_iProvinceStruct[10].percent[3] = 25.75;

   //Saskatchewan
   m_iProvinceStruct[11].provinceName = "Saskatchewan";
   m_iProvinceStruct[11].provinceCredit = 15241.0;
   m_iProvinceStruct[11].taxTiers = 3;
   m_iProvinceStruct[11].percent[0] = 11.0;
   m_iProvinceStruct[11].amount[0] = 42906.0;
   m_iProvinceStruct[11].percent[1] = 13.0;
   m_iProvinceStruct[11].amount[1] = 79683.0;
   m_iProvinceStruct[11].percent[2] = 15.0;

   //Yukon
   m_iProvinceStruct[12].provinceName = "Yukon";
   m_iProvinceStruct[12].provinceCredit = 11038.0;
   m_iProvinceStruct[12].taxTiers = 4;
   m_iProvinceStruct[12].percent[0] = 7.04;
   m_iProvinceStruct[12].amount[0] = 43561.0;
   m_iProvinceStruct[12].percent[1] = 9.68;
   m_iProvinceStruct[12].amount[1] = 43562.0;
   m_iProvinceStruct[12].percent[2] = 11.44;
   m_iProvinceStruct[12].amount[2] = 47931.0;
   m_iProvinceStruct[12].percent[3] = 12.76;
}

IncomeTaxObject::~IncomeTaxObject() {
    delete m_iProvinceStruct;
}

void IncomeTaxObject::setAnnualIncome(QString i)
{
	m_iAnnualIncome = i;
	emit annualIncomeChanged(m_iAnnualIncome);
}

QString IncomeTaxObject::getAnnualIncome()
{
	return m_iAnnualIncome;
}

void IncomeTaxObject::setProvince(int i)
{
	m_iProvince = i;
	emit provinceChanged(m_iProvince);
}

int IncomeTaxObject::getProvince()
{
	return m_iProvince;
}

void IncomeTaxObject::setAfterTaxIncome(QString i)
{
    m_iAfterTaxIncome = i;
    emit afterTaxIncomeChanged(m_iAfterTaxIncome);
}

QString IncomeTaxObject::getAfterTaxIncome()
{
    return m_iAfterTaxIncome;
}


void IncomeTaxObject::setAverageTaxRate(QString i)
{
    m_iAverageTaxRate = i;
    emit averageTaxRateChanged(m_iAfterTaxIncome);
}

QString IncomeTaxObject::getAverageTaxRate()
{
    return m_iAverageTaxRate;
}

void IncomeTaxObject::setTotalIncomeTax(QString i)
{
    m_iTotalIncomeTax = i;
    emit totalIncomeTaxChanged(m_iTotalIncomeTax);
}

QString IncomeTaxObject::getTotalIncomeTax()
{
    return m_iTotalIncomeTax;
}

void IncomeTaxObject::calculate()
{
	bool isAnnualIncomeOk;
	QString lAnnualIncome = getAnnualIncome();
	double lAnnualIncomeDouble = lAnnualIncome.toDouble(&isAnnualIncomeOk);
	double lFederalIncomeTaxDouble = calculateFederalTax(lAnnualIncomeDouble, getProvince());
	double lProvincialIncomeTaxDouble = calculateProvincialTax(lAnnualIncomeDouble, getProvince());
	double lAfterTaxIncome = lAnnualIncomeDouble - lFederalIncomeTaxDouble - lProvincialIncomeTaxDouble;
	double lTotalIncomeTax = lFederalIncomeTaxDouble+lProvincialIncomeTaxDouble;
	double lAverageTaxRate = 0.0;
	if (lAnnualIncomeDouble != 0.0)
	{
	    lAverageTaxRate = (lTotalIncomeTax/lAnnualIncomeDouble)*100;
	}
	setAfterTaxIncome(QString("$")+formatCommas(QString::number(lAfterTaxIncome,'f',2)));
	setTotalIncomeTax(QString("$"+formatCommas(QString::number(lTotalIncomeTax, 'f', 2))));
	setAverageTaxRate(QString(QString::number(lAverageTaxRate, 'f', 2))+"%");
}

void IncomeTaxObject::reset()
{
	setAnnualIncome("");
	setProvince(0);
	setAfterTaxIncome("--");
	setTotalIncomeTax("--");
	setAverageTaxRate("--");
}

double IncomeTaxObject::calculateFederalTax(double aInAnnualIncome, int aInProvince)
{
	double lFederalTax = 0;
	if (aInAnnualIncome <= 43561)
	{
		lFederalTax = 0.15*aInAnnualIncome;
	}
	if ((aInAnnualIncome > 43561) && (aInAnnualIncome <= 87123))
	{
		lFederalTax = 6534 + 0.22*(aInAnnualIncome-43561);
	}
	if ((aInAnnualIncome > 87123) && (aInAnnualIncome <= 135054))
	{
		lFederalTax = 16118 + 0.26*(aInAnnualIncome-87123);
	}
	if (aInAnnualIncome > 135054)
	{
		lFederalTax = 28580 + 0.29*(aInAnnualIncome-135054);
	}

	lFederalTax -= federalTaxCredit*0.15;

	if (aInProvince == 10)
	{
	    lFederalTax -= lFederalTax*0.165;
	}

	if (lFederalTax > 0.0)
   {
	    return lFederalTax;
   }
	else
   {
	    return 0.0;
   }
}

double IncomeTaxObject::calculateProvincialTax(double aInAnnualIncome, int aInProvince)
{
   ProvinceStruct lProvince = m_iProvinceStruct[aInProvince];
   double lRemainingIncome = aInAnnualIncome;
   double lProvincialTax = 0;

   //calculate the intermediate tax
   for (int lTier = 0; lTier < (lProvince.taxTiers-1); lTier++)
   {
       double lDifference = lRemainingIncome - lProvince.amount[lTier];
       if (lDifference > 0.0)
       {
           lProvincialTax += 0.01*lProvince.percent[lTier]*lProvince.amount[lTier];
       }
       else
       {
           lProvincialTax += 0.01*lProvince.percent[lTier]*lRemainingIncome;
           lRemainingIncome = 0.0;
           break;
       }
       lRemainingIncome -= lProvince.amount[lTier];
   }

   //calculate remaining tax if any
   if (lRemainingIncome > 0.0)
   {
       lProvincialTax += lRemainingIncome*0.01*lProvince.percent[lProvince.taxTiers-1];
   }

   // quebec subtracts on 20% (2nd percentile)
   if (aInProvince == 10)
   {
       lProvincialTax -= lProvince.provinceCredit*0.20;
   }
   else
   {
       lProvincialTax -= lProvince.provinceCredit*lProvince.percent[0]*0.01;
   }

   if (lProvincialTax > 0.0)
   {
     //calculate Surtax if in Ontario or Yukon
     double surTax = 0;
     if (aInProvince == 8)
     {
         if (lProvincialTax > 4289.0)
         {
             surTax += 0.20*(lProvincialTax-4289.0);
         }
         if (lProvincialTax > 5489.0)
         {
             surTax += 0.36*(lProvincialTax-5489.0);
         }
     }
     else if (aInProvince == 12)
     {
         if (lProvincialTax > 6000.0)
         {
             surTax += 0.05*(lProvincialTax-6000.0);
         }
     }
     return lProvincialTax + surTax;
   }
   else
   {
     return 0.0;
   }
}

// Make the dollar figures look pretty by addding appropriate commas.
// There probably already is a Qt method for this.
QString IncomeTaxObject::formatCommas(QString aInNumbers)
{
    int lPos = aInNumbers.lastIndexOf('.');

    while (lPos > 3)
    {
        lPos -= 3;
        aInNumbers.insert(lPos, ',');
    }
    return aInNumbers;
}
