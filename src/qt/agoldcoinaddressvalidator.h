#ifndef agoldcoinADDRESSVALIDATOR_H
#define agoldcoinADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class agoldcoinAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit agoldcoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // agoldcoinADDRESSVALIDATOR_H
