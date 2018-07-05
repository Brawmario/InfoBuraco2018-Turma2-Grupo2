#include "OSDAO.h"



OSDAO::OSDAO()
{
}

/*sql::ResultSet OSDAO::ListarOS()
{
	std::string log, stg;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet =  nullptr;
	int i;
	float valor;
	try {
		MySQLDAO * MySQL = MySQLDAO::getInstance();
		connection = MySQL->getConnection();
		preparedStatement = connection->prepareStatement("SELECT * FROM db_b.OS;");
		resultSet = preparedStatement->executeQuery();
	catch (sql::SQLException e) {
		connection->close();
		log = e.what();
	}
	return resultSet;
}*/
