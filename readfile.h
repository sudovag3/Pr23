#ifndef READFILE_H
#define READFILE_H

#include <QString>
#include <QFile>
#include <QDataStream>

class ReadFile
{
public:
    ReadFile(const QString& fileName);
    ~ReadFile();

    void ReadF();
    int operator[](int i) const;
    int getCount() const;

private:
    int* m;
    int count_m;
    QFile* file;

    void read_stream(QDataStream& stream);
};

#endif // READFILE_H
