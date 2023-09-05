#pragma once
#include "DB.h"
#include "AgregarProducto.h"
#include "ModificarProducto.h"

namespace Hamburgueseria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Productos
	/// </summary>
	public ref class Productos : public System::Windows::Forms::Form
	{
	public:
		Productos(void)
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
		~Productos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ data_grid_productos;
	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_agregar_producto;
	private: System::Windows::Forms::Button^ btn_borrartodo_producto;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->data_grid_productos = (gcnew System::Windows::Forms::DataGridView());
			this->btn_agregar_producto = (gcnew System::Windows::Forms::Button());
			this->btn_borrartodo_producto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_productos))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(197, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Productos";
			// 
			// data_grid_productos
			// 
			this->data_grid_productos->AllowUserToAddRows = false;
			this->data_grid_productos->AllowUserToResizeRows = false;
			this->data_grid_productos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->data_grid_productos->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->data_grid_productos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid_productos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid_productos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
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
			this->data_grid_productos->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid_productos->Location = System::Drawing::Point(77, 130);
			this->data_grid_productos->Name = L"data_grid_productos";
			this->data_grid_productos->ReadOnly = true;
			this->data_grid_productos->RowHeadersVisible = false;
			this->data_grid_productos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_productos->Size = System::Drawing::Size(878, 416);
			this->data_grid_productos->TabIndex = 3;
			this->data_grid_productos->DoubleClick += gcnew System::EventHandler(this, &Productos::data_grid_productos_DoubleClick);
			// 
			// btn_agregar_producto
			// 
			this->btn_agregar_producto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_agregar_producto->Location = System::Drawing::Point(110, 69);
			this->btn_agregar_producto->Name = L"btn_agregar_producto";
			this->btn_agregar_producto->Size = System::Drawing::Size(159, 35);
			this->btn_agregar_producto->TabIndex = 4;
			this->btn_agregar_producto->Text = L"Agregar";
			this->btn_agregar_producto->UseVisualStyleBackColor = true;
			this->btn_agregar_producto->Click += gcnew System::EventHandler(this, &Productos::btn_agregar_producto_Click);
			// 
			// btn_borrartodo_producto
			// 
			this->btn_borrartodo_producto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_borrartodo_producto->Location = System::Drawing::Point(696, 69);
			this->btn_borrartodo_producto->Name = L"btn_borrartodo_producto";
			this->btn_borrartodo_producto->Size = System::Drawing::Size(159, 35);
			this->btn_borrartodo_producto->TabIndex = 5;
			this->btn_borrartodo_producto->Text = L"Eliminar todos";
			this->btn_borrartodo_producto->UseVisualStyleBackColor = true;
			this->btn_borrartodo_producto->Click += gcnew System::EventHandler(this, &Productos::btn_borrartodo_producto_Click);
			// 
			// Productos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(920, 555);
			this->Controls->Add(this->btn_borrartodo_producto);
			this->Controls->Add(this->btn_agregar_producto);
			this->Controls->Add(this->data_grid_productos);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Productos";
			this->Text = L"Productos";
			this->Load += gcnew System::EventHandler(this, &Productos::Productos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_productos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Productos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->data_grid_productos->DataSource = this->data->getDataProductos();
		this->data_grid_productos->Columns["id"]->Visible = false;
		this->data->CerrarConexion();
	}

	private: System::Void btn_agregar_producto_Click(System::Object^ sender, System::EventArgs^ e) {
		Hamburgueseria::AgregarProducto^ agregarProducto = gcnew Hamburgueseria::AgregarProducto();
		agregarProducto->ShowDialog();
		this->Consulta();
	}

	private: System::Void data_grid_productos_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (data_grid_productos->RowCount == 0)
		{
			MessageBox::Show("No existen datos a modificar", "Advertencia");
		}
		else
		{
			int id = Convert::ToInt32(data_grid_productos->SelectedRows[0]->Cells[0]->Value);
			String^ nombre = Convert::ToString(data_grid_productos->SelectedRows[0]->Cells[1]->Value);
			Decimal simple = Convert::ToDecimal(data_grid_productos->SelectedRows[0]->Cells[2]->Value);
			Decimal doble = Convert::ToDecimal(data_grid_productos->SelectedRows[0]->Cells[3]->Value);
			Decimal triple = Convert::ToDecimal(data_grid_productos->SelectedRows[0]->Cells[4]->Value);
			Hamburgueseria::ModificarProducto^ modi = gcnew Hamburgueseria::ModificarProducto(id, nombre, simple, doble, triple);
			modi->ShowDialog();
			this->Consulta();
		}
	}
	
	private: System::Void btn_borrartodo_producto_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crea un formulario vacío (puede ser un formulario invisible)
		Form^ form = gcnew Form();

		System::Windows::Forms::DialogResult resultado = MessageBox::Show(form, "¿Estás seguro de que deseas eliminar todos los productos?", "Advertencia", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			// El usuario hizo clic en "Aceptar", realiza la acción de eliminación
			this->data->AbrirConexion();
			this->data->EliminarTodosProducto();
			this->data->CerrarConexion();
			MessageBox::Show("Los productos han sido eliminados.", "Acción exitosa");
			this->Consulta();
		}
		else if (resultado == System::Windows::Forms::DialogResult::Cancel)
		{
			// El usuario hizo clic en "Cancelar", no hagas nada
		}
	}
};
}
