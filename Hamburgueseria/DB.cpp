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
	String^ sql = "Select id, nombre as 'Nombre', simple as 'Simple', doble as 'Doble', triple as 'Triple' from producto";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ DB::getDataVentas()
{
	String^ sql = "Select id, cliente as 'Cliente', hora as 'Hora de entrega', tipo_pago as 'Tipo de pago', pago as 'Pago', simple as 'Simple', doble as 'Doble', triple as 'Triple' from venta";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ DB::getDataInventario()
{
	String^ sql = "Select id, nombre as 'Nombre', cantidad as 'Cantidad', precio_unitario as 'Precio Unitario', precio_total as 'Precio Total' from inventario";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::InsertarProducto(String^ n, Decimal s, Decimal d, Decimal t) {
	String^ sql = "insert into producto(Nombre, Simple, Doble, Triple) values ('" + n + "','" + s + "','" + d + "','" + t + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::ModProducto(int id, String^ n, Decimal s, Decimal d, Decimal t) {
	String^ sql = "update producto set Nombre = '" + n + "', Simple = '" + s + "', Doble = '" + d + "', Triple = '" + t + "' where id = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarProducto(int id) {
	String^ sql = "delete from producto where id = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarTodosProducto() {
	String^ sql = "delete from producto";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::InsertarInventario(String^ n, int c, Decimal pu) {
	String^ sql = "insert into inventario(Nombre, Cantidad, Precio_Unitario) values ('" + n + "','" + c + "','" + pu + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	sql = "update inventario set Precio_Total = '" + c + "' * '" + pu + "' where id = (select LAST_INSERT_ID())";
	cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::ModInventario(int id, String^ n, int c, Decimal pu) {
	String^ sql = "update inventario set Nombre = '" + n + "', Cantidad = '" + c + "', Precio_Unitario = '" + pu + "' where id = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	sql = "update inventario set Precio_Total = '" + c + "' * '" + pu + "' where id = '" + id + "'";
	cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarInventario(int id) {
	String^ sql = "delete from inventario where id = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarTodosInventario() {
	String^ sql = "delete from inventario";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::InsertarVenta(String^ c, String^ h, String^ tp, Decimal p, int s, int d, int t) {
	String^ sql = "insert into venta(Cliente, Hora, Tipo_Pago, Pago, Simple, Doble, Triple) values ('" + c + "','" + h + "','" + tp + "','" + p + "', '" + s + "', '" + d + "', '" + t + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::ModVenta(int id, String^ c, String^ h, String^ tp, Decimal p, int s, int d, int t) {
	String^ sql = "update venta set Cliente = '" + c + "', Hora = '" + h + "', Tipo_Pago = '" + tp + "', Pago = '" + p + "', Simple = '" + s + "', Doble = '" + d + "', Triple = '" + t + "' where id = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	
}

void DB::EliminarVenta(int id) {
	String^ sql = "delete from venta where id = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarTodosVenta() {
	String^ sql = "delete from venta";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

double DB::getTotalInventario() {
	double resultado = 0;
	String^ sql = "select sum(Precio_Total) from inventario";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		Object^ resultObj = cursor->ExecuteScalar();

		if (resultObj != nullptr && resultObj != DBNull::Value) {
			resultado = Convert::ToDouble(resultObj);
		}
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return resultado;
}

double DB::getTotalVentas() {
	double resultado = 0;
	String^ sql = "select count(*) from venta";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		Object^ resultObj = cursor->ExecuteScalar();

		if (resultObj != nullptr && resultObj != DBNull::Value) {
			resultado = Convert::ToDouble(resultObj);
		}
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return resultado;
} 



double DB::getTotalEfectivo() {
	double resultado = 0;
	String^ sql = "select sum(Pago) from venta where Tipo_Pago = 'Efectivo'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		Object^ resultObj = cursor->ExecuteScalar();

		if (resultObj != nullptr && resultObj != DBNull::Value) {
			resultado = Convert::ToDouble(resultObj);
		}
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return resultado;
}

double DB::getTotalMp() {
	double resultado = 0;
	String^ sql = "select sum(Pago) from venta where Tipo_Pago = 'Mp'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		Object^ resultObj = cursor->ExecuteScalar();

		if (resultObj != nullptr && resultObj != DBNull::Value) {
			resultado = Convert::ToDouble(resultObj);
		}
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return resultado;
}

Int32 DB::getTotalSimple() {
	Int32 simple = 0;
	String^ sql = "select sum(Simple) from venta";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		Object^ resultObj = cursor->ExecuteScalar();

		if (resultObj != nullptr && resultObj != DBNull::Value) {
			simple = Convert::ToInt32(resultObj);
		}
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return simple;
}

Int32 DB::getTotalDoble() {
	Int32 doble = 0;
	String^ sql = "select sum(Doble) from venta";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		Object^ resultObj = cursor->ExecuteScalar();

		if (resultObj != nullptr && resultObj != DBNull::Value) {
			doble = Convert::ToInt32(resultObj);
		}
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return doble;
}

Int32 DB::getTotalTriple() {
	Int32 triple = 0;
	String^ sql = "select sum(Triple) from venta";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		Object^ resultObj = cursor->ExecuteScalar();

		if (resultObj != nullptr && resultObj != DBNull::Value) {
			triple = Convert::ToInt32(resultObj);
		}
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return triple;
}