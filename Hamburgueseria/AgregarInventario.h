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
	/// Resumen de AgregarInventario
	/// </summary>
	public ref class AgregarInventario : public System::Windows::Forms::Form
	{
	public:
		AgregarInventario(void)
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
		~AgregarInventario()
		{
			if (components)
			{
				delete components;
			}
		}private: System::Windows::Forms::TextBox^ txt_pu;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txt_cantidad;
	private: System::Windows::Forms::TextBox^ txt_nombre_inventario;


	private: System::Windows::Forms::Button^ btn_cancelar_inventario;

	private: System::Windows::Forms::Button^ btn_guardar_inventario;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: DB^ data;
	private: int id;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarInventario::typeid));
			this->txt_pu = (gcnew System::Windows::Forms::TextBox());
			this->txt_cantidad = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre_inventario = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancelar_inventario = (gcnew System::Windows::Forms::Button());
			this->btn_guardar_inventario = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_pu
			// 
			this->txt_pu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pu->Location = System::Drawing::Point(250, 225);
			this->txt_pu->Name = L"txt_pu";
			this->txt_pu->Size = System::Drawing::Size(248, 24);
			this->txt_pu->TabIndex = 18;
			// 
			// txt_cantidad
			// 
			this->txt_cantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cantidad->Location = System::Drawing::Point(250, 166);
			this->txt_cantidad->Name = L"txt_cantidad";
			this->txt_cantidad->Size = System::Drawing::Size(248, 24);
			this->txt_cantidad->TabIndex = 17;
			// 
			// txt_nombre_inventario
			// 
			this->txt_nombre_inventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_nombre_inventario->Location = System::Drawing::Point(250, 102);
			this->txt_nombre_inventario->Name = L"txt_nombre_inventario";
			this->txt_nombre_inventario->Size = System::Drawing::Size(248, 24);
			this->txt_nombre_inventario->TabIndex = 16;
			// 
			// btn_cancelar_inventario
			// 
			this->btn_cancelar_inventario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->btn_cancelar_inventario->FlatAppearance->BorderSize = 0;
			this->btn_cancelar_inventario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar_inventario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_cancelar_inventario->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_cancelar_inventario->Location = System::Drawing::Point(352, 310);
			this->btn_cancelar_inventario->Name = L"btn_cancelar_inventario";
			this->btn_cancelar_inventario->Size = System::Drawing::Size(146, 40);
			this->btn_cancelar_inventario->TabIndex = 15;
			this->btn_cancelar_inventario->Text = L"Cancelar";
			this->btn_cancelar_inventario->UseVisualStyleBackColor = false;
			this->btn_cancelar_inventario->Click += gcnew System::EventHandler(this, &AgregarInventario::btn_cancelar_Click);
			// 
			// btn_guardar_inventario
			// 
			this->btn_guardar_inventario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btn_guardar_inventario->FlatAppearance->BorderSize = 0;
			this->btn_guardar_inventario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar_inventario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_guardar_inventario->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_guardar_inventario->Location = System::Drawing::Point(49, 310);
			this->btn_guardar_inventario->Name = L"btn_guardar_inventario";
			this->btn_guardar_inventario->Size = System::Drawing::Size(146, 40);
			this->btn_guardar_inventario->TabIndex = 14;
			this->btn_guardar_inventario->Text = L"Guardar";
			this->btn_guardar_inventario->UseVisualStyleBackColor = false;
			this->btn_guardar_inventario->Click += gcnew System::EventHandler(this, &AgregarInventario::btn_guardar_inventario_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(54, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 24);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Precio Unitario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(54, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 24);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Cantidad";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(54, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre";
			// 
			// AgregarInventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(605, 387);
			this->Controls->Add(this->txt_pu);
			this->Controls->Add(this->txt_cantidad);
			this->Controls->Add(this->txt_nombre_inventario);
			this->Controls->Add(this->btn_cancelar_inventario);
			this->Controls->Add(this->btn_guardar_inventario);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AgregarInventario";
			this->Text = L"Modificar Inventario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_guardar_inventario_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->txt_nombre_inventario->Text) || String::IsNullOrEmpty(this->txt_cantidad->Text) || String::IsNullOrEmpty(this->txt_pu->Text))
		{
			// El cuadro de texto está vacío
			MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
		}
		else
		{
			int cantidad = int::Parse(txt_cantidad->Text);
			double pu = double::Parse(txt_pu->Text);
			this->data->AbrirConexion();
			this->data->InsertarInventario(this->txt_nombre_inventario->Text, cantidad, pu);
			this->data->CerrarConexion();
			this->Close();
		}
	}
	};
}
