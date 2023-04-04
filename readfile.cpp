#include "readfile.h"

ReadFile::ReadFile(const QString& fileName)
    : count_m(0), file(new QFile(fileName)), m(nullptr)
{
    if (file->exists())
    {
        count_m = file->size() / sizeof(int);
        m = new int[count_m];
    }
}

ReadFile::~ReadFile()
{
    delete[] m;
    delete file;
}

void ReadFile::ReadF()
{
    if (file->open(QIODevice::ReadOnly))
    {
        QDataStream stream(file);
        read_stream(stream);
        file->close();
    }
}

int ReadFile::operator[](int i) const
{
    return m[i];
}

int ReadFile::getCount() const
{
    return count_m;
}

void ReadFile::read_stream(QDataStream& stream)
{
    stream.setVersion(QDataStream::Qt_2_0);
    stream.setByteOrder(QDataStream::LittleEndian);
    int i = 0;
    while (!stream.atEnd())
    {
        int n = 0;
        stream >> n;
        m[i] = n;
        i++;
    }
}
