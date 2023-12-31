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
	DataTable^ getDataTableProductos();
	DataTable^ getDataTableVentaHamburguesa();
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
	void InsertarVentaHamburguesa(String^, String^, int, int, int);
	void ModVentaHamburguesa(String^, String^, String^, int, int, int);
	double getTotalVentaHamburguesa(String^, int, int, int);
	int getSimpleCliente(String^, String^);
	int getDobleCliente(String^, String^);
	int getTripleCliente(String^, String^);
	void InsertarVenta(String^, String^, String^, Decimal);
	void ModVenta(int, String^, String^, String^, Decimal);
	void EliminarVenta(int, String^);
	void EliminarTodosVenta();
	double getTotalInventario();
	double getTotalVentas();
	double getTotalEfectivo();
	double getTotalMp();
	Int32 getTotalSimple();
	Int32 getTotalDoble();
	Int32 getTotalTriple();
};

