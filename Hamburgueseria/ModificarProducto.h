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
	private: System::Windows::Forms::Button^ btn_eliminar;




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
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_triple
			// 
			this->txt_triple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_triple->Location = System::Drawing::Point(250, 263);
			this->txt_triple->Name = L"txt_triple";
			this->txt_triple->Size = System::Drawing::Size(248, 24);
			this->txt_triple->TabIndex = 19;
			// 
			// txt_doble
			// 
			this->txt_doble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_doble->Location = System::Drawing::Point(250, 204);
			this->txt_doble->Name = L"txt_doble";
			this->txt_doble->Size = System::Drawing::Size(248, 24);
			this->txt_doble->TabIndex = 18;
			// 
			// txt_simple
			// 
			this->txt_simple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_simple->Location = System::Drawing::Point(250, 145);
			this->txt_simple->Name = L"txt_simple";
			this->txt_simple->Size = System::Drawing::Size(248, 24);
			this->txt_simple->TabIndex = 17;
			// 
			// txt_nombre_producto
			// 
			this->txt_nombre_producto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_nombre_producto->Location = System::Drawing::Point(250, 81);
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
			this->btn_guardar_producto->Location = System::Drawing::Point(49, 323);
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
			this->label4->Location = System::Drawing::Point(59, 263);
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
			this->label3->Location = System::Drawing::Point(54, 204);
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
			this->label2->Location = System::Drawing::Point(54, 139);
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
			this->label1->Location = System::Drawing::Point(45, 77);
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
			// ModificarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(605, 387);
			this->Controls->Add(this->btn_eliminar);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
		if (String::IsNullOrEmpty(this->txt_nombre_producto->Text) || String::IsNullOrEmpty(this->txt_simple->Text) || String::IsNullOrEmpty(this->txt_doble->Text) || String::IsNullOrEmpty(this->txt_triple->Text))
		{
			// El cuadro de texto está vacío
			MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
		}
		else
		{
			double simple = double::Parse(txt_simple->Text);
			double doble = double::Parse(txt_doble->Text);
			double triple = double::Parse(txt_triple->Text);
			this->data->AbrirConexion();
			this->data->ModProducto(id, this->txt_nombre_producto->Text, simple, doble, triple);
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
