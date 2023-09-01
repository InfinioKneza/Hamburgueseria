#include "DB.h"

DB::DB()
{
	this->connectionString = "datasource=localhost; username=infinio; password=pikarichu64; database=hamburgueseria;";
	this->conn = gcnew MySqlConnection(this->connectionString);
}


void DB::AbrirConexion()
{
	this->conn->Open();
}

void DB::CerrarConexion()
{
	this->conn->Close();
}

DataTable^ DB::getDataProductos()
{
	String^ sql = "Select * from producto";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ DB::getDataVentas()
{
	String^ sql = "Select * from venta";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ DB::getDataInventario()
{
	String^ sql = "Select * from inventario";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}