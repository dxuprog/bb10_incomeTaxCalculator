// Default empty project template
import bb.cascades 1.0
import bb.system 1.0

// creates one page with a label
Page {
    /**
    attachedObjects: 
        [
        SystemDialog {
            id: myQmlDialog
            title: "Disclamer"
            body: "This application estimates income taxes based on the 2013 Canadian"
            +" tax rates and surtaxes posted by the federal and provinical bodies. "
            +"The calculations assume only individual " 
            + "basic federal and provincial tax credits."
            +"\n\n"
            +"The creator of this application is not responsible for any "
            +"loss or damages that may occur from the use of this app."
            +" This application is for estimation purposes only."
            +"\n\n"
            +"Press OK to agree, or Cancel to exit the application."
        
            onFinished: {
                if (myQmlDialog.result == SystemUiResult.CancelButtonSelection) Application.quit();
            }
        }
    ]
    onCreationCompleted: {
            myQmlDialog.show()
    }
*/
    Container {
        background: Color.create("#dd000000")
        Container{
            background: Color.Gray
            preferredWidth: 1280.0
            preferredHeight: 100.0
            verticalAlignment: VerticalAlignment.Center
            implicitLayoutAnimationsEnabled: true
            opacity: 1.0
            layout: StackLayout {
                orientation: LayoutOrientation.TopToBottom
            }
            Container
            {
                // stack horizontal spacer
            }
            Label {
                text: "Canadian Income Tax Calculator 2013"
                horizontalAlignment: HorizontalAlignment.Center
                textStyle.fontSize: FontSize.Medium
                textStyle.color: Color.White
                verticalAlignment: VerticalAlignment.Center
            }
        }
        layout: StackLayout {
            orientation: LayoutOrientation.TopToBottom
        }
        verticalAlignment: VerticalAlignment.Fill
        horizontalAlignment: HorizontalAlignment.Fill
        Container {
            // stack horizontal spacer
            preferredHeight: 50.0
        }
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
                textStyle.color: Color.White
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
        Container {
            // stack horizontal spacer
            preferredHeight: 25.0
        }
        DropDown {
            id: provinceDropDown
            horizontalAlignment: HorizontalAlignment.Center
            title: "Select Province to Calculate"
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
            // stack horizontal spacer
            preferredHeight: 25.0
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
                minWidth: 0.0
                leftPadding: 50.0
                preferredWidth: 425.0
                Label {
                    text: "Average Tax Rate:"
                    verticalAlignment: VerticalAlignment.Center
                    horizontalAlignment: HorizontalAlignment.Right
                    bottomMargin: 50.0
                    topMargin: 50.0
                    textStyle.color: Color.White
                }
                Label {
                    text: "Total Income Tax:"
                    verticalAlignment: VerticalAlignment.Center
                    horizontalAlignment: HorizontalAlignment.Right
                    bottomMargin: 50.0
                    textStyle.color: Color.White
                }
                Label {
                    text: "After Tax Income:"
                    verticalAlignment: VerticalAlignment.Center
                    horizontalAlignment: HorizontalAlignment.Right
                    textStyle.color: Color.White
                }
            }
            Container {
                leftPadding: 25.0
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
                minWidth: 0.0
                preferredWidth: 350.0
                Label {
                    bottomMargin: 50.0
                    topMargin: 50.0
                    id: averageTaxRateField
                    text: incomeTaxObject.averageTaxRate
                    textStyle.color: Color.White
                }
                Label {
                    id: totalIncomeTaxField
                    text: incomeTaxObject.totalIncomeTax
                    bottomMargin: 50.0
                    topMargin: 50.0
                    textStyle.color: Color.White
                }
                Label {
                    id: afterTaxIncomeField
                    text: incomeTaxObject.afterTaxIncome
                    bottomMargin: 25.0
                    textStyle.color: Color.White
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
            topPadding: 50.0
            Button {
                text: "Calculate"
                onClicked: {
                    incomeTaxObject.calculate();
                }
                minHeight: 0.0
                minWidth: 0.0
                preferredWidth: 300.0
            }
            Button 
            {
                text: "Clear Fields"
                onClicked: 
                {
                        incomeTaxObject.reset();
                        provinceDropDown.resetSelectedOption();
                        provinceDropDown.setTitle("Select Province to Calculate");
                }
                minHeight: 0.0
                minWidth: 0.0
                preferredWidth: 300.0
            }
        }
    }
}
