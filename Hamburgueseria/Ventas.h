#pragma once
#include "DB.h"
#include "AgregarVenta.h"
#include "ModificarVenta.h"

namespace Hamburgueseria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //Para poder utilizar IO de archivos (exportar CSV)

	/// <summary>
	/// Resumen de Ventas
	/// </summary>
	public ref class Ventas : public System::Windows::Forms::Form
	{
	public:
		Ventas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ventas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btn_agregar_venta;

	private: System::Windows::Forms::Button^ btn_eliminart_venta;
	private: DB^ data;
	private: System::Windows::Forms::DataGridView^ data_grid_ventas;
	private: System::Windows::Forms::Button^ btn_exportar;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_agregar_venta = (gcnew System::Windows::Forms::Button());
			this->btn_eliminart_venta = (gcnew System::Windows::Forms::Button());
			this->data_grid_ventas = (gcnew System::Windows::Forms::DataGridView());
			this->btn_exportar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_ventas))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(386, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ventas";
			// 
			// btn_agregar_venta
			// 
			this->btn_agregar_venta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_agregar_venta->Location = System::Drawing::Point(110, 69);
			this->btn_agregar_venta->Name = L"btn_agregar_venta";
			this->btn_agregar_venta->Size = System::Drawing::Size(159, 35);
			this->btn_agregar_venta->TabIndex = 3;
			this->btn_agregar_venta->Text = L"Agregar";
			this->btn_agregar_venta->UseVisualStyleBackColor = true;
			this->btn_agregar_venta->Click += gcnew System::EventHandler(this, &Ventas::btn_agregar_venta_Click);
			// 
			// btn_eliminart_venta
			// 
			this->btn_eliminart_venta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminart_venta->Location = System::Drawing::Point(696, 69);
			this->btn_eliminart_venta->Name = L"btn_eliminart_venta";
			this->btn_eliminart_venta->Size = System::Drawing::Size(159, 35);
			this->btn_eliminart_venta->TabIndex = 5;
			this->btn_eliminart_venta->Text = L"Eliminar todos";
			this->btn_eliminart_venta->UseVisualStyleBackColor = true;
			this->btn_eliminart_venta->Click += gcnew System::EventHandler(this, &Ventas::btn_eliminart_venta_Click);
			// 
			// data_grid_ventas
			// 
			this->data_grid_ventas->AllowUserToAddRows = false;
			this->data_grid_ventas->AllowUserToResizeRows = false;
			this->data_grid_ventas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->data_grid_ventas->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->data_grid_ventas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid_ventas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid_ventas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid_ventas->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid_ventas->Location = System::Drawing::Point(80, 129);
			this->data_grid_ventas->Name = L"data_grid_ventas";
			this->data_grid_ventas->ReadOnly = true;
			this->data_grid_ventas->RowHeadersVisible = false;
			this->data_grid_ventas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_ventas->Size = System::Drawing::Size(805, 414);
			this->data_grid_ventas->TabIndex = 6;
			this->data_grid_ventas->DoubleClick += gcnew System::EventHandler(this, &Ventas::data_grid_ventas_DoubleClick);
			// 
			// btn_exportar
			// 
			this->btn_exportar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exportar->Location = System::Drawing::Point(394, 69);
			this->btn_exportar->Name = L"btn_exportar";
			this->btn_exportar->Size = System::Drawing::Size(159, 35);
			this->btn_exportar->TabIndex = 7;
			this->btn_exportar->Text = L"Exportar";
			this->btn_exportar->UseVisualStyleBackColor = true;
			this->btn_exportar->Click += gcnew System::EventHandler(this, &Ventas::btn_exportar_Click);
			// 
			// Ventas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(920, 555);
			this->Controls->Add(this->btn_exportar);
			this->Controls->Add(this->data_grid_ventas);
			this->Controls->Add(this->btn_eliminart_venta);
			this->Controls->Add(this->btn_agregar_venta);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ventas";
			this->Text = L"Ventas";
			this->Load += gcnew System::EventHandler(this, &Ventas::Ventas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_ventas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ventas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->data_grid_ventas->DataSource = this->data->getDataVentas();
		this->data_grid_ventas->Columns["id"]->Visible = false;
		this->data->CerrarConexion();
	}

	private: System::Void btn_agregar_venta_Click(System::Object^ sender, System::EventArgs^ e) {

		Hamburgueseria::AgregarVenta^ agregarVenta = gcnew Hamburgueseria::AgregarVenta();
		agregarVenta->ShowDialog();
		this->Consulta();
	}

	private: System::Void btn_eliminart_venta_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crea un formulario vacío (puede ser un formulario invisible)
		Form^ form = gcnew Form();

		System::Windows::Forms::DialogResult resultado = MessageBox::Show(form, "¿Estás seguro de que deseas eliminar todas las ventas?", "Advertencia", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			// El usuario hizo clic en "Aceptar", realiza la acción de eliminación
			this->data->AbrirConexion();
			this->data->EliminarTodosVenta();
			this->data->CerrarConexion();
			MessageBox::Show("Las ventas han sido eliminadas.", "Acción exitosa");
			this->Consulta();
		}
		else if (resultado == System::Windows::Forms::DialogResult::Cancel)
		{
			// El usuario hizo clic en "Cancelar", no hagas nada

		}
	}


	private: System::Void data_grid_ventas_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (data_grid_ventas->RowCount == 0)
		{
			MessageBox::Show("No existen datos a modificar", "Advertencia");
		}
		else
		{
			int id = Convert::ToInt32(data_grid_ventas->SelectedRows[0]->Cells[0]->Value);
			String^ cliente = Convert::ToString(data_grid_ventas->SelectedRows[0]->Cells[1]->Value);
			String^ hora = Convert::ToString(data_grid_ventas->SelectedRows[0]->Cells[2]->Value);
			String^ tipo = Convert::ToString(data_grid_ventas->SelectedRows[0]->Cells[3]->Value);
			Decimal pago = Convert::ToDecimal(data_grid_ventas->SelectedRows[0]->Cells[4]->Value);
			Hamburgueseria::ModificarVenta^ modi = gcnew Hamburgueseria::ModificarVenta(id, cliente, hora, tipo);
			modi->ShowDialog();
			this->Consulta();
		}
	}
	private: System::Void btn_exportar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crea un cuadro de diálogo para seleccionar la ubicación del archivo CSV
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Archivos CSV|*.csv";
		saveFileDialog1->Title = "Guardar como CSV";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Abre un archivo para escritura en la ubicación seleccionada
			String^ filePath = saveFileDialog1->FileName;
			StreamWriter^ sw = gcnew StreamWriter(filePath);

			// Escribe las cabeceras de las columnas (nombres de las columnas)
			for (int i = 0; i < data_grid_ventas->Columns->Count; i++) {
				sw->Write(data_grid_ventas->Columns[i]->HeaderText);
				if (i < data_grid_ventas->Columns->Count - 1) {
					sw->Write(",");
				}
			}
			sw->WriteLine(); // Nueva línea después de las cabeceras

			// Escribe los datos de las filas
			for (int row = 0; row < data_grid_ventas->RowCount; row++) {
				for (int col = 0; col < data_grid_ventas->ColumnCount; col++) {
					sw->Write(data_grid_ventas->Rows[row]->Cells[col]->Value);
					if (col < data_grid_ventas->ColumnCount - 1) {
						sw->Write(",");
					}
				}
				sw->WriteLine(); // Nueva línea después de cada fila
			}

			sw->WriteLine();

			this->data->AbrirConexion();
			DataTable^ vhTable = this->data->getDataTableVentaHamburguesa();
			this->data->CerrarConexion();

			// Escribe las cabeceras de las columnas en el archivo CSV
			for each (DataColumn ^ column in vhTable->Columns)
			{
				sw->Write(column->ColumnName + ",");
			}
			sw->WriteLine(); // Nueva línea después de las cabeceras

			// Escribe los datos de las filas en el archivo CSV
			for each (DataRow ^ row in vhTable->Rows)
			{
				for each (Object ^ item in row->ItemArray)
				{
					sw->Write(item->ToString() + ",");
				}
				sw->WriteLine(); // Nueva línea después de cada fila
			}
		
			// Cierra el archivo
			sw->Close();

			MessageBox::Show("La tabla se ha exportado como archivo CSV con éxito.", "Exportación CSV", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};
}
