// Default empty project template
#ifndef CanadianIncomeTax_HPP_
#define CanadianIncomeTax_HPP_

#include <QObject>
#include <QMetaType>
#include <IncomeTaxObject.h>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class CanadianIncomeTax : public QObject
{
    Q_OBJECT
    IncomeTaxObject* m_IncomeTaxObject;

public:
    CanadianIncomeTax(bb::cascades::Application *app);
    virtual ~CanadianIncomeTax() {delete m_IncomeTaxObject;}

};


#endif /* CanadianIncomeTax_HPP_ */
