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
	void InsertarProducto(String^,Decimal ,Decimal, Decimal);
	void ModProducto(int, String^, Decimal, Decimal, Decimal);
	void EliminarProducto(int);
	void EliminarTodosProducto();
	void InsertarInventario(String^, int, Decimal);
	void ModInventario(int, String^, int, Decimal);
	void EliminarInventario(int);
	void EliminarTodosInventario();
	void InsertarVenta(String^, String^, String^, Decimal);
	void ModVenta(int, String^, String^, String^, Decimal);
	void EliminarVenta(int);
	void EliminarTodosVenta();
};

