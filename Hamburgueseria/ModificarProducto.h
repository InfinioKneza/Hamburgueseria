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
		ModificarProducto(int id, String^ n, Decimal s, Decimal d, Decimal t)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->id = id;
			this->txt_nombre_producto->Text = n;
			this->numeric_simple->Value = s;
			this->numeric_doble->Value = d;
			this->numeric_triple->Value = t;
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

	protected:


	private: System::Windows::Forms::TextBox^ txt_nombre_producto;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_guardar_producto;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: DB^ data;
	private: int id;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::NumericUpDown^ numeric_triple;
	private: System::Windows::Forms::NumericUpDown^ numeric_doble;
	private: System::Windows::Forms::NumericUpDown^ numeric_simple;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModificarProducto::typeid));
			this->txt_nombre_producto = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_guardar_producto = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->numeric_triple = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_doble = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_simple = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_triple))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_doble))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_simple))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre_producto
			// 
			this->txt_nombre_producto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_nombre_producto->Location = System::Drawing::Point(269, 79);
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
			this->button1->Location = System::Drawing::Point(352, 323);
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
			this->btn_guardar_producto->Location = System::Drawing::Point(63, 323);
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
			this->label4->Location = System::Drawing::Point(78, 261);
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
			this->label3->Location = System::Drawing::Point(73, 202);
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
			this->label2->Location = System::Drawing::Point(73, 137);
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
			this->label1->Location = System::Drawing::Point(64, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre";
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->btn_eliminar->FlatAppearance->BorderSize = 0;
			this->btn_eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_eliminar->Location = System::Drawing::Point(436, 12);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(146, 40);
			this->btn_eliminar->TabIndex = 20;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &ModificarProducto::btn_eliminar_Click);
			// 
			// numeric_triple
			// 
			this->numeric_triple->DecimalPlaces = 2;
			this->numeric_triple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_triple->Location = System::Drawing::Point(269, 267);
			this->numeric_triple->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_triple->Name = L"numeric_triple";
			this->numeric_triple->Size = System::Drawing::Size(248, 24);
			this->numeric_triple->TabIndex = 30;
			// 
			// numeric_doble
			// 
			this->numeric_doble->DecimalPlaces = 2;
			this->numeric_doble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_doble->Location = System::Drawing::Point(269, 205);
			this->numeric_doble->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_doble->Name = L"numeric_doble";
			this->numeric_doble->Size = System::Drawing::Size(248, 24);
			this->numeric_doble->TabIndex = 29;
			// 
			// numeric_simple
			// 
			this->numeric_simple->DecimalPlaces = 2;
			this->numeric_simple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_simple->Location = System::Drawing::Point(269, 140);
			this->numeric_simple->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_simple->Name = L"numeric_simple";
			this->numeric_simple->Size = System::Drawing::Size(248, 24);
			this->numeric_simple->TabIndex = 28;
			// 
			// ModificarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(605, 387);
			this->Controls->Add(this->numeric_triple);
			this->Controls->Add(this->numeric_doble);
			this->Controls->Add(this->numeric_simple);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->txt_nombre_producto);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_guardar_producto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModificarProducto";
			this->Text = L"Modificar Producto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_triple))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_doble))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_simple))->EndInit();
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
			this->data->ModProducto(id, this->txt_nombre_producto->Text, this->numeric_simple->Value, this->numeric_doble->Value, this->numeric_triple->Value);
			this->data->CerrarConexion();
			this->Close();
		}
	}
	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		// Crea un formulario vacío (puede ser un formulario invisible)
		Form^ form = gcnew Form();

		System::Windows::Forms::DialogResult resultado = MessageBox::Show(form, "¿Estás seguro de que deseas eliminar este producto?", "Advertencia", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			// El usuario hizo clic en "Aceptar", realiza la acción de eliminación
			this->data->AbrirConexion();
			this->data->EliminarProducto(id);
			this->data->CerrarConexion();
			MessageBox::Show("El producto ha sido eliminado.", "Acción completada");
			this->Close();
		}
		else if (resultado == System::Windows::Forms::DialogResult::Cancel)
		{
			// El usuario hizo clic en "Cancelar", no hagas nada
			MessageBox::Show("La eliminación ha sido cancelada.", "Acción completada");
		}

	}
};
}
