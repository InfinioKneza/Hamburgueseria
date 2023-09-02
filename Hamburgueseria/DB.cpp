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
	String^ sql = "Select id, cliente as 'Cliente', hora as 'Hora de entrega', tipo_pago as 'Tipo de pago', pago as 'Pago' from venta";
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

void DB::InsertarProducto(String^ n, double s, double d, double t) {
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

void DB::ModProducto(int id, String^ n, double s, double d, double t) {
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