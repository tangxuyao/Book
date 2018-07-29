#include "sqldb.h"

SqlDB::SqlDB()
{
    if (QSqlDatabase::contains(QSqlDatabase::defaultConnection))
    {
        database = QSqlDatabase::database(QSqlDatabase::defaultConnection);
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("storyIDE.db");
        database.setUserName("soxy");
        database.setPassword("123456");
    }
}

bool SqlDB::open()
{
    if (!database.open()) {
        return false;
    }

    return true;
}
