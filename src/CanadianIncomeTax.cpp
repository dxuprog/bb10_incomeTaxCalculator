// Default empty project template
#include "CanadianIncomeTax.hpp"

#include <bb/cascades/Application>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/AbstractPane>

using namespace bb::cascades;

CanadianIncomeTax::CanadianIncomeTax(bb::cascades::Application *app)
: QObject(app)
{
    // create scene document from main.qml asset
    // set parent to created document to ensure it exists for the whole application lifetime
    QmlDocument *qml = QmlDocument::create("asset:///main.qml").parent(this);
    m_IncomeTaxObject = new IncomeTaxObject();
    qml->setContextProperty("incomeTaxObject", m_IncomeTaxObject);

    if (!qml->hasErrors()) {
        // create root object for the UI
        AbstractPane *root = qml->createRootObject<AbstractPane>();

        if (root)
        {
            // set created root object as a scene
            app->setScene(root);
        }
    }
}
