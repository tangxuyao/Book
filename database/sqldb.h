#ifndef SQLDB_H
#define SQLDB_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class SqlDB
{
public:
    SqlDB();

private:
    QSqlDatabase database;
};

#endif // SQLDB_H
