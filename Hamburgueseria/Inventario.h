#pragma once
#include "DB.h"
#include "AgregarInventario.h"
#include "ModificarInventario.h"

namespace Hamburgueseria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inventario
	/// </summary>
	public ref class Inventario : public System::Windows::Forms::Form
	{
	public:
		Inventario(void)
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
		~Inventario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ data_grid_inventario;
	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_borrartodo_inventario;

	private: System::Windows::Forms::Button^ btn_agregar_inventario;


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
			this->data_grid_inventario = (gcnew System::Windows::Forms::DataGridView());
			this->btn_borrartodo_inventario = (gcnew System::Windows::Forms::Button());
			this->btn_agregar_inventario = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_inventario))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(198, 44);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Inventario";
			// 
			// data_grid_inventario
			// 
			this->data_grid_inventario->AllowUserToAddRows = false;
			this->data_grid_inventario->AllowUserToResizeRows = false;
			this->data_grid_inventario->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->data_grid_inventario->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->data_grid_inventario->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid_inventario->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid_inventario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
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
			this->data_grid_inventario->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid_inventario->Location = System::Drawing::Point(77, 130);
			this->data_grid_inventario->Name = L"data_grid_inventario";
			this->data_grid_inventario->ReadOnly = true;
			this->data_grid_inventario->RowHeadersVisible = false;
			this->data_grid_inventario->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_inventario->Size = System::Drawing::Size(878, 416);
			this->data_grid_inventario->TabIndex = 4;
			this->data_grid_inventario->DoubleClick += gcnew System::EventHandler(this, &Inventario::data_grid_inventario_DoubleClick);
			// 
			// btn_borrartodo_inventario
			// 
			this->btn_borrartodo_inventario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_borrartodo_inventario->Location = System::Drawing::Point(696, 69);
			this->btn_borrartodo_inventario->Name = L"btn_borrartodo_inventario";
			this->btn_borrartodo_inventario->Size = System::Drawing::Size(159, 35);
			this->btn_borrartodo_inventario->TabIndex = 7;
			this->btn_borrartodo_inventario->Text = L"Eliminar todos";
			this->btn_borrartodo_inventario->UseVisualStyleBackColor = true;
			this->btn_borrartodo_inventario->Click += gcnew System::EventHandler(this, &Inventario::btn_borrartodo_inventario_Click);
			// 
			// btn_agregar_inventario
			// 
			this->btn_agregar_inventario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_agregar_inventario->Location = System::Drawing::Point(110, 69);
			this->btn_agregar_inventario->Name = L"btn_agregar_inventario";
			this->btn_agregar_inventario->Size = System::Drawing::Size(159, 35);
			this->btn_agregar_inventario->TabIndex = 6;
			this->btn_agregar_inventario->Text = L"Agregar";
			this->btn_agregar_inventario->UseVisualStyleBackColor = true;
			this->btn_agregar_inventario->Click += gcnew System::EventHandler(this, &Inventario::btn_agregar_inventario_Click);
			// 
			// Inventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(920, 555);
			this->Controls->Add(this->btn_borrartodo_inventario);
			this->Controls->Add(this->btn_agregar_inventario);
			this->Controls->Add(this->data_grid_inventario);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inventario";
			this->Text = L"Inventario";
			this->Load += gcnew System::EventHandler(this, &Inventario::Inventario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_inventario))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Inventario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->data_grid_inventario->DataSource = this->data->getDataInventario();
		this->data_grid_inventario->Columns["id"]->Visible = false;
		this->data->CerrarConexion();
	}
	
	private: System::Void btn_agregar_inventario_Click(System::Object^ sender, System::EventArgs^ e) {
		Hamburgueseria::AgregarInventario^ agregarInventario = gcnew Hamburgueseria::AgregarInventario();
		agregarInventario->ShowDialog();
		this->Consulta();
	}
	private: System::Void btn_borrartodo_inventario_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crea un formulario vacío (puede ser un formulario invisible)
		Form^ form = gcnew Form();

		System::Windows::Forms::DialogResult resultado = MessageBox::Show(form, "¿Estás seguro de que deseas eliminar todos los elementos?", "Advertencia", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			// El usuario hizo clic en "Aceptar", realiza la acción de eliminación
			this->data->AbrirConexion();
			this->data->EliminarTodosInventario();
			this->data->CerrarConexion();
			MessageBox::Show("Los elementos han sido eliminados.", "Acción exitosa");
			this->Consulta();
		}
		else if (resultado == System::Windows::Forms::DialogResult::Cancel)
		{
			// El usuario hizo clic en "Cancelar", no hagas nada
	
		}
	}

	private: System::Void data_grid_inventario_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (data_grid_inventario->RowCount == 0)
		{
			MessageBox::Show("No existen datos a modificar", "Advertencia");
		}
		else
		{
			int id = Convert::ToInt32(data_grid_inventario->SelectedRows[0]->Cells[0]->Value);
			String^ nombre = Convert::ToString(data_grid_inventario->SelectedRows[0]->Cells[1]->Value);
			int cantidad = Convert::ToInt16(data_grid_inventario->SelectedRows[0]->Cells[2]->Value);
			Decimal pu = Convert::ToDecimal(data_grid_inventario->SelectedRows[0]->Cells[3]->Value);
			Hamburgueseria::ModificarInventario^ modi = gcnew Hamburgueseria::ModificarInventario(id, nombre, cantidad, pu);
			modi->ShowDialog();
			this->Consulta();
		}
	}
};
}
