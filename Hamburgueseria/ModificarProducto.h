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
	/// Resumen de ModificarProducto
	/// </summary>
	public ref class ModificarProducto : public System::Windows::Forms::Form
	{
	public:
		ModificarProducto(int id, String^ n, String^ s, String^ d, String^ t)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->id = id;
			this->txt_nombre_producto->Text = n;
			this->txt_simple->Text = s;
			this->txt_doble->Text = d;
			this->txt_triple->Text = t;
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_triple;
	protected:
	private: System::Windows::Forms::TextBox^ txt_doble;
	private: System::Windows::Forms::TextBox^ txt_simple;
	private: System::Windows::Forms::TextBox^ txt_nombre_producto;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_guardar_producto;
	private: System::Windows::Forms::Label^ label4;
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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_triple = (gcnew System::Windows::Forms::TextBox());
			this->txt_doble = (gcnew System::Windows::Forms::TextBox());
			this->txt_simple = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre_producto = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_guardar_producto = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_triple
			// 
			this->txt_triple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_triple->Location = System::Drawing::Point(246, 236);
			this->txt_triple->Name = L"txt_triple";
			this->txt_triple->Size = System::Drawing::Size(248, 24);
			this->txt_triple->TabIndex = 19;
			// 
			// txt_doble
			// 
			this->txt_doble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_doble->Location = System::Drawing::Point(246, 177);
			this->txt_doble->Name = L"txt_doble";
			this->txt_doble->Size = System::Drawing::Size(248, 24);
			this->txt_doble->TabIndex = 18;
			// 
			// txt_simple
			// 
			this->txt_simple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_simple->Location = System::Drawing::Point(246, 118);
			this->txt_simple->Name = L"txt_simple";
			this->txt_simple->Size = System::Drawing::Size(248, 24);
			this->txt_simple->TabIndex = 17;
			// 
			// txt_nombre_producto
			// 
			this->txt_nombre_producto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_nombre_producto->Location = System::Drawing::Point(246, 54);
			this->txt_nombre_producto->Name = L"txt_nombre_producto";
			this->txt_nombre_producto->Size = System::Drawing::Size(248, 24);
			this->txt_nombre_producto->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(348, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 40);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarProducto::button1_Click);
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
			this->btn_guardar_producto->TabIndex = 14;
			this->btn_guardar_producto->Text = L"Guardar";
			this->btn_guardar_producto->UseVisualStyleBackColor = false;
			this->btn_guardar_producto->Click += gcnew System::EventHandler(this, &ModificarProducto::btn_guardar_producto_Click);
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
			this->label4->TabIndex = 13;
			this->label4->Text = L"Triple";
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
			this->label3->TabIndex = 12;
			this->label3->Text = L"Doble";
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
			this->label2->TabIndex = 11;
			this->label2->Text = L"Simple";
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
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre";
			// 
			// ModificarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(605, 387);
			this->Controls->Add(this->txt_triple);
			this->Controls->Add(this->txt_doble);
			this->Controls->Add(this->txt_simple);
			this->Controls->Add(this->txt_nombre_producto);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_guardar_producto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarProducto";
			this->Text = L"Modificar Producto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_guardar_producto_Click(System::Object^ sender, System::EventArgs^ e) {
		double simple = double::Parse(txt_simple->Text);
		double doble = double::Parse(txt_doble->Text);
		double triple = double::Parse(txt_triple->Text);
		this->data->AbrirConexion();
		this->data->ModProducto(id, this->txt_nombre_producto->Text, simple, doble, triple);
		this->data->CerrarConexion();
		MessageBox::Show(L"Modificado correctamente!");
		this->Close();
	}
};
}
