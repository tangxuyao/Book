#ifndef SQLDB_H
#define SQLDB_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class SqlDB
{
public:
    SqlDB();

public:
    bool open();
    void close();

private:
    QSqlDatabase database;
};

#endif // SQLDB_H
