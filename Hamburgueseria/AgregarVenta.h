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
	/// Resumen de AgregarVenta
	/// </summary>
	public ref class AgregarVenta : public System::Windows::Forms::Form
	{
	public:
		AgregarVenta(void)
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
		~AgregarVenta()
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
	private: System::Windows::Forms::Button^ btn_guardar_venta;

	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::TextBox^ txt_cliente;
	private: System::Windows::Forms::TextBox^ txt_hora;







	private: DB^ data;
	private: System::Windows::Forms::ComboBox^ lista_tipo_pago;
	private: System::Windows::Forms::NumericUpDown^ numeric_pago;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numeric_simple;
	private: System::Windows::Forms::NumericUpDown^ numeric_doble;
	private: System::Windows::Forms::NumericUpDown^ numeric_triple;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarVenta::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar_venta = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->txt_cliente = (gcnew System::Windows::Forms::TextBox());
			this->txt_hora = (gcnew System::Windows::Forms::TextBox());
			this->lista_tipo_pago = (gcnew System::Windows::Forms::ComboBox());
			this->numeric_pago = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numeric_simple = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_doble = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_triple = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_pago))->BeginInit();
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
			this->label1->Location = System::Drawing::Point(87, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(94, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Hora";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(61, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de pago";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(92, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Pago";
			// 
			// btn_guardar_venta
			// 
			this->btn_guardar_venta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btn_guardar_venta->FlatAppearance->BorderSize = 0;
			this->btn_guardar_venta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar_venta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar_venta->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_guardar_venta->Location = System::Drawing::Point(91, 376);
			this->btn_guardar_venta->Name = L"btn_guardar_venta";
			this->btn_guardar_venta->Size = System::Drawing::Size(146, 40);
			this->btn_guardar_venta->TabIndex = 4;
			this->btn_guardar_venta->Text = L"Guardar";
			this->btn_guardar_venta->UseVisualStyleBackColor = false;
			this->btn_guardar_venta->Click += gcnew System::EventHandler(this, &AgregarVenta::btn_guardar_venta_Click);
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
			this->btn_cancelar->Location = System::Drawing::Point(441, 376);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(146, 40);
			this->btn_cancelar->TabIndex = 5;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &AgregarVenta::button1_Click);
			// 
			// txt_cliente
			// 
			this->txt_cliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cliente->Location = System::Drawing::Point(277, 26);
			this->txt_cliente->Name = L"txt_cliente";
			this->txt_cliente->Size = System::Drawing::Size(248, 24);
			this->txt_cliente->TabIndex = 6;
			// 
			// txt_hora
			// 
			this->txt_hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_hora->Location = System::Drawing::Point(277, 71);
			this->txt_hora->Name = L"txt_hora";
			this->txt_hora->Size = System::Drawing::Size(248, 24);
			this->txt_hora->TabIndex = 7;
			// 
			// lista_tipo_pago
			// 
			this->lista_tipo_pago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lista_tipo_pago->FormattingEnabled = true;
			this->lista_tipo_pago->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mp", L"Efectivo" });
			this->lista_tipo_pago->Location = System::Drawing::Point(277, 120);
			this->lista_tipo_pago->Name = L"lista_tipo_pago";
			this->lista_tipo_pago->Size = System::Drawing::Size(248, 26);
			this->lista_tipo_pago->TabIndex = 10;
			// 
			// numeric_pago
			// 
			this->numeric_pago->DecimalPlaces = 2;
			this->numeric_pago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_pago->Location = System::Drawing::Point(277, 169);
			this->numeric_pago->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_pago->Name = L"numeric_pago";
			this->numeric_pago->Size = System::Drawing::Size(248, 24);
			this->numeric_pago->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(87, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 24);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Simple";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(87, 267);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 24);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Doble";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(92, 309);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 24);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Triple";
			// 
			// numeric_simple
			// 
			this->numeric_simple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_simple->Location = System::Drawing::Point(277, 220);
			this->numeric_simple->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
			this->numeric_simple->Name = L"numeric_simple";
			this->numeric_simple->Size = System::Drawing::Size(248, 24);
			this->numeric_simple->TabIndex = 28;
			// 
			// numeric_doble
			// 
			this->numeric_doble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_doble->Location = System::Drawing::Point(277, 267);
			this->numeric_doble->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
			this->numeric_doble->Name = L"numeric_doble";
			this->numeric_doble->Size = System::Drawing::Size(248, 24);
			this->numeric_doble->TabIndex = 29;
			// 
			// numeric_triple
			// 
			this->numeric_triple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_triple->Location = System::Drawing::Point(277, 312);
			this->numeric_triple->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
			this->numeric_triple->Name = L"numeric_triple";
			this->numeric_triple->Size = System::Drawing::Size(248, 24);
			this->numeric_triple->TabIndex = 30;
			// 
			// AgregarVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(705, 438);
			this->Controls->Add(this->numeric_triple);
			this->Controls->Add(this->numeric_doble);
			this->Controls->Add(this->numeric_simple);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numeric_pago);
			this->Controls->Add(this->lista_tipo_pago);
			this->Controls->Add(this->txt_hora);
			this->Controls->Add(this->txt_cliente);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar_venta);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AgregarVenta";
			this->Text = L"Agregar Venta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_pago))->EndInit();
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
	private: System::Void btn_guardar_venta_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->txt_cliente->Text) || String::IsNullOrEmpty(this->txt_hora->Text) || String::IsNullOrEmpty(this->lista_tipo_pago->Text) || String::IsNullOrEmpty(numeric_pago->Text))
		{
			// El cuadro de texto está vacío
			MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
		}
		else
		{
	
			this->data->AbrirConexion();
			int simple = Convert::ToInt32(this->numeric_simple->Value);
			int doble = Convert::ToInt32(this->numeric_doble->Value);
			int triple = Convert::ToInt32(this->numeric_triple->Value);
			this->data->InsertarVenta(this->txt_cliente->Text, this->txt_hora->Text, this->lista_tipo_pago->Text, this->numeric_pago->Value, simple, doble, triple);
			this->data->CerrarConexion();
			this->Close();
		}
	}
	};
}
