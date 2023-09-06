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
	/// Resumen de AgregarProducto
	/// </summary>
	public ref class AgregarProducto : public System::Windows::Forms::Form
	{
	public:
		AgregarProducto(void)
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
		~AgregarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_guardar_producto;
	private: System::Windows::Forms::Button^ btn_cancelar;

	private: System::Windows::Forms::TextBox^ txt_nombre_producto;



	private: DB^ data;
	private: System::Windows::Forms::NumericUpDown^ numeric_simple;
	private: System::Windows::Forms::NumericUpDown^ numeric_doble;
	private: System::Windows::Forms::NumericUpDown^ numeric_triple;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarProducto::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar_producto = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->txt_nombre_producto = (gcnew System::Windows::Forms::TextBox());
			this->numeric_simple = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_doble = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_triple = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_simple))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_doble))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_triple))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(41, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(50, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Simple";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(50, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Doble";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(55, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Triple";
			// 
			// btn_guardar_producto
			// 
			this->btn_guardar_producto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btn_guardar_producto->FlatAppearance->BorderSize = 0;
			this->btn_guardar_producto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar_producto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar_producto->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_guardar_producto->Location = System::Drawing::Point(92, 312);
			this->btn_guardar_producto->Name = L"btn_guardar_producto";
			this->btn_guardar_producto->Size = System::Drawing::Size(146, 40);
			this->btn_guardar_producto->TabIndex = 4;
			this->btn_guardar_producto->Text = L"Guardar";
			this->btn_guardar_producto->UseVisualStyleBackColor = false;
			this->btn_guardar_producto->Click += gcnew System::EventHandler(this, &AgregarProducto::btn_guardar_producto_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->btn_cancelar->FlatAppearance->BorderSize = 0;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_cancelar->Location = System::Drawing::Point(348, 312);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(146, 40);
			this->btn_cancelar->TabIndex = 5;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &AgregarProducto::button1_Click);
			// 
			// txt_nombre_producto
			// 
			this->txt_nombre_producto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_nombre_producto->Location = System::Drawing::Point(246, 54);
			this->txt_nombre_producto->Name = L"txt_nombre_producto";
			this->txt_nombre_producto->Size = System::Drawing::Size(248, 24);
			this->txt_nombre_producto->TabIndex = 6;
			// 
			// numeric_simple
			// 
			this->numeric_simple->DecimalPlaces = 2;
			this->numeric_simple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_simple->Location = System::Drawing::Point(246, 112);
			this->numeric_simple->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_simple->Name = L"numeric_simple";
			this->numeric_simple->Size = System::Drawing::Size(248, 24);
			this->numeric_simple->TabIndex = 25;
			// 
			// numeric_doble
			// 
			this->numeric_doble->DecimalPlaces = 2;
			this->numeric_doble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_doble->Location = System::Drawing::Point(246, 177);
			this->numeric_doble->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_doble->Name = L"numeric_doble";
			this->numeric_doble->Size = System::Drawing::Size(248, 24);
			this->numeric_doble->TabIndex = 26;
			// 
			// numeric_triple
			// 
			this->numeric_triple->DecimalPlaces = 2;
			this->numeric_triple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_triple->Location = System::Drawing::Point(246, 239);
			this->numeric_triple->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_triple->Name = L"numeric_triple";
			this->numeric_triple->Size = System::Drawing::Size(248, 24);
			this->numeric_triple->TabIndex = 27;
			// 
			// AgregarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(605, 387);
			this->Controls->Add(this->numeric_triple);
			this->Controls->Add(this->numeric_doble);
			this->Controls->Add(this->numeric_simple);
			this->Controls->Add(this->txt_nombre_producto);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar_producto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AgregarProducto";
			this->Text = L"Agregar Producto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_simple))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_doble))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_triple))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_guardar_producto_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->txt_nombre_producto->Text) || String::IsNullOrEmpty(this->numeric_simple->Text) || String::IsNullOrEmpty(this->numeric_doble->Text) || String::IsNullOrEmpty(this->numeric_triple->Text))
		{
			// El cuadro de texto está vacío
			MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
		}
		else
		{
			this->data->AbrirConexion();
			this->data->InsertarProducto(this->txt_nombre_producto->Text, this->numeric_simple->Value, this->numeric_doble->Value, this->numeric_triple->Value);
			this->data->CerrarConexion();
			this->Close();
		}
	}
};
}
