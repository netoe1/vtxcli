#include <sqlite3.h>
#include <string>
#include <iostream>

class SQLite
{
public:
    void check_db_error(int &rc, std::string &msg)
    {
        if (rc != SQLITE_OK)
        {
            std::cerr << "Erro: " << msg << std::endl;
            sqlite3_close(nullptr); // Feche o banco de dados se houver um erro grave
            exit(1);
        }
    }

    static int callback_cpp(void *data, int argc, char **argv, char **azColName)
    {
        const std::string &custom_data = *static_cast<const std::string *>(data);

        std::cout << custom_data << ": ";

        for (int i = 0; i < argc; ++i)
        {
            // Converte os ponteiros C-style para std::string
            const std::string col_name = azColName[i];
            const std::string col_value = (argv[i] ? argv[i] : "NULL");

            std::cout << col_name << " = " << col_value << " | ";
        }
        std::cout << "\n";

        return 0;
    }

    sqlite3 *opendb(const std::string path, sqlite3 *db)
    {
        int rc = sqlite3_open(path.c_str(), &db);
        if (!rc != SQLITE_OK)
        {
            std::cerr << "opendb-err: Erro ao abrir o banco de dados:" << sqlite3_errmsg(db) << "\n";
            exit(-1);
        }

        return db;
    }

    void closedb(sqlite3 *db)
    {
        int rc = sqlite3_close(db);
        if (rc != SQLITE_OK)
        {
            std::cerr << "closedb-err: Erro ao fechar o banco de dados." << "\n";
        }
    }
};