// Default empty project template
import bb.cascades 1.0

// creates one page with a label
Page {
    Container {
        background: Color.DarkGray
        Label {
            text: "Canadian Income Tax Calculator 2013"
            horizontalAlignment: HorizontalAlignment.Center
            textStyle.fontSize: FontSize.Large
        }
        layout: StackLayout {
            orientation: LayoutOrientation.TopToBottom
        }
        verticalAlignment: VerticalAlignment.Fill
        horizontalAlignment: HorizontalAlignment.Fill
        
        Container
        {
            layout: StackLayout 
                    {
                         orientation: LayoutOrientation.LeftToRight
                     }
            horizontalAlignment: HorizontalAlignment.Center
            Label {
                text: "$"
                multiline: false
                textStyle.textAlign: TextAlign.Default
                visible: true
                verticalAlignment: VerticalAlignment.Center
                horizontalAlignment: HorizontalAlignment.Center
                textStyle.fontSize: FontSize.XLarge
            }
            TextField {
                id: annualIncomeField
                hintText: "Enter Annual Income"
                inputMode: TextFieldInputMode.NumbersAndPunctuation
                maxWidth: 555.0
                horizontalAlignment: HorizontalAlignment.Center
                text: incomeTaxObject.annualIncome
                onTextChanged: {
                    incomeTaxObject.annualIncome = annualIncomeField.text
                }
                autoFit: TextAutoFit.Default
                textStyle.fontSize: FontSize.XLarge
                textFormat: TextFormat.Plain

            }
        }
        DropDown {
            id: provinceDropDown
            horizontalAlignment: HorizontalAlignment.Center
            title: "Select Province"
            maxWidth: 615.0
            options: Option {
                text: "Alberta"
                value: 0
            }
            Option {
                text: "British Colombia"
                value: 1
            }
            Option {
                text: "Manitoba"
                value: 2
            }
            Option {
                text: "New Brunswick"
                value: 3
            }
            Option {
                text: "Newfoundland and Labrador"
                value: 4
            }
            Option {
                text: "Northwest Territories"
                value: 5
            }
            Option {
                text: "Nova Scotia"
                value: 6
            }
            Option {
                text: "Nunavut"
                value: 7
            }
            Option {
                text: "Ontario"
                    value: 8
                }
                Option {
                    text: "Prince Edward Island"
                    value: 9
                }
                Option {
                    text: "Quebec"
                    value: 10
                }
                Option {
                    text: "Saskatchewan"
                    value: 11
                }
                Option {
                    text: "Yukon"
                    value: 12
                }
                onSelectedOptionChanged: 
                {
                    incomeTaxObject.province = selectedOption.value
                    provinceDropDown.title = "Province: "
                } 
        }
        Container {
            layout: StackLayout {
                orientation: LayoutOrientation.LeftToRight
            }
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Center
            Container {
                
                layout: StackLayout {
                }
                verticalAlignment: VerticalAlignment.Center
                horizontalAlignment: HorizontalAlignment.Center
                minWidth: 450.0
                leftPadding: 50.0
                //  minHeight: 384.0
              //  topMargin: 50.0
              //  topPadding: 25.0
                Label {
                    text: "Average Tax Rate:"
                    verticalAlignment: VerticalAlignment.Center
                    horizontalAlignment: HorizontalAlignment.Right
                    bottomMargin: 50.0
                    topMargin: 50.0
                }
                Label {
                    text: "Total Income Tax:"
                    verticalAlignment: VerticalAlignment.Center
                    horizontalAlignment: HorizontalAlignment.Right
                    bottomMargin: 50.0
                }
                Label {
                    text: "After Tax Income:"
                    verticalAlignment: VerticalAlignment.Center
                    horizontalAlignment: HorizontalAlignment.Right
                }
            }
            Container {
                leftPadding: 25.0
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
                minWidth: 384.0
           //     minHeight: 384.0
              //  preferredHeight: 384.0
                preferredWidth: 384.0
                Label {
                    //maxWidth: 200.0
                    bottomMargin: 50.0
                    topMargin: 50.0
                    id: averageTaxRateField
                    text: incomeTaxObject.averageTaxRate
                }
                Label {
                    id: totalIncomeTaxField
                    text: incomeTaxObject.totalIncomeTax
                    bottomMargin: 50.0
                    topMargin: 50.0
                    // maxWidth: 250.0
                }
                Label {
                    id: afterTaxIncomeField
               //     maxWidth: 250.0
                    text: incomeTaxObject.afterTaxIncome
                    bottomMargin: 50.0
                }
            }
        }
        Container
        {
            
            layout: StackLayout 
            {
                orientation: LayoutOrientation.LeftToRight
            }
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Bottom
            topPadding: 75.0
            Button 
            {
                text: "Calculate"
                onClicked:
                {
                        incomeTaxObject.calculate();
                }
            }
            Button 
            {
                text: "Clear"
                onClicked: 
                {
                        incomeTaxObject.reset();
                        provinceDropDown.setSelectedOption(0);
                }
            }
        }
    }
}
