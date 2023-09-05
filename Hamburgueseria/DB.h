#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	DataTable^ getDataProductos();
	DataTable^ getDataVentas();
	DataTable^ getDataInventario();
	void AbrirConexion();
	void CerrarConexion();
	void InsertarProducto(String^,double,double,double);
	void ModProducto(int, String^, double, double, double);
	void EliminarProducto(int);
	void EliminarTodosProducto();
	void InsertarInventario(String^, int, double);
	void ModInventario(int, String^, int, double);
	void EliminarInventario(int);
	void EliminarTodosInventario();
	void InsertarVenta(String^, String^, String^, double);
	void ModVenta(int, String^, String^, String^, double);
	void EliminarVenta(int);
	void EliminarTodosVenta();
};

