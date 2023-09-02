#pragma once
#include "DB.h"

namespace Hamburgueseria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ data_grid_ventas;

	private: System::Windows::Forms::Button^ btn_agregar_venta;
	private: System::Windows::Forms::Button^ btn_modificar_venta;
	private: System::Windows::Forms::Button^ btn_eliminart_venta;
	private: DB^ data;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->data_grid_ventas = (gcnew System::Windows::Forms::DataGridView());
			this->btn_agregar_venta = (gcnew System::Windows::Forms::Button());
			this->btn_modificar_venta = (gcnew System::Windows::Forms::Button());
			this->btn_eliminart_venta = (gcnew System::Windows::Forms::Button());
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
			// data_grid_ventas
			// 
			this->data_grid_ventas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_ventas->Location = System::Drawing::Point(93, 139);
			this->data_grid_ventas->Name = L"data_grid_ventas";
			this->data_grid_ventas->Size = System::Drawing::Size(749, 393);
			this->data_grid_ventas->TabIndex = 2;
			// 
			// btn_agregar_venta
			// 
			this->btn_agregar_venta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_agregar_venta->Location = System::Drawing::Point(36, 78);
			this->btn_agregar_venta->Name = L"btn_agregar_venta";
			this->btn_agregar_venta->Size = System::Drawing::Size(159, 35);
			this->btn_agregar_venta->TabIndex = 3;
			this->btn_agregar_venta->Text = L"Agregar";
			this->btn_agregar_venta->UseVisualStyleBackColor = true;
			// 
			// btn_modificar_venta
			// 
			this->btn_modificar_venta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modificar_venta->Location = System::Drawing::Point(378, 78);
			this->btn_modificar_venta->Name = L"btn_modificar_venta";
			this->btn_modificar_venta->Size = System::Drawing::Size(159, 35);
			this->btn_modificar_venta->TabIndex = 4;
			this->btn_modificar_venta->Text = L"Modificar";
			this->btn_modificar_venta->UseVisualStyleBackColor = true;
			// 
			// btn_eliminart_venta
			// 
			this->btn_eliminart_venta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminart_venta->Location = System::Drawing::Point(717, 78);
			this->btn_eliminart_venta->Name = L"btn_eliminart_venta";
			this->btn_eliminart_venta->Size = System::Drawing::Size(159, 35);
			this->btn_eliminart_venta->TabIndex = 5;
			this->btn_eliminart_venta->Text = L"Eliminar todos";
			this->btn_eliminart_venta->UseVisualStyleBackColor = true;
			// 
			// Ventas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(920, 555);
			this->Controls->Add(this->btn_eliminart_venta);
			this->Controls->Add(this->btn_modificar_venta);
			this->Controls->Add(this->btn_agregar_venta);
			this->Controls->Add(this->data_grid_ventas);
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
};
}
