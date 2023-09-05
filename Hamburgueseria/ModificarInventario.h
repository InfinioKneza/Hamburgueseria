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
	/// Resumen de ModificarInventario
	/// </summary>
	public ref class ModificarInventario : public System::Windows::Forms::Form
	{
	public:
		ModificarInventario(int id, String^ n, int s, Decimal d)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->id = id;
			this->txt_nombre_inventario->Text = n;
			this->numeric_cantidad->Value = s;
			this->numeric_precio_unitario->Value = d;
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarInventario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txt_nombre_inventario;


	private: System::Windows::Forms::Button^ btn_cancelar_inventario;

	private: System::Windows::Forms::Button^ btn_guardar_inventario;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: DB^ data;
	private: int id;
	private: System::Windows::Forms::Button^ btn_eliminar_inventario;
	private: System::Windows::Forms::NumericUpDown^ numeric_precio_unitario;
	private: System::Windows::Forms::NumericUpDown^ numeric_cantidad;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModificarInventario::typeid));
			this->txt_nombre_inventario = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancelar_inventario = (gcnew System::Windows::Forms::Button());
			this->btn_guardar_inventario = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_eliminar_inventario = (gcnew System::Windows::Forms::Button());
			this->numeric_precio_unitario = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_cantidad = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_precio_unitario))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_cantidad))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre_inventario
			// 
			this->txt_nombre_inventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_nombre_inventario->Location = System::Drawing::Point(279, 103);
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
			this->btn_cancelar_inventario->Location = System::Drawing::Point(381, 310);
			this->btn_cancelar_inventario->Name = L"btn_cancelar_inventario";
			this->btn_cancelar_inventario->Size = System::Drawing::Size(146, 40);
			this->btn_cancelar_inventario->TabIndex = 15;
			this->btn_cancelar_inventario->Text = L"Cancelar";
			this->btn_cancelar_inventario->UseVisualStyleBackColor = false;
			this->btn_cancelar_inventario->Click += gcnew System::EventHandler(this, &ModificarInventario::button1_Click);
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
			this->btn_guardar_inventario->Location = System::Drawing::Point(87, 310);
			this->btn_guardar_inventario->Name = L"btn_guardar_inventario";
			this->btn_guardar_inventario->Size = System::Drawing::Size(146, 40);
			this->btn_guardar_inventario->TabIndex = 14;
			this->btn_guardar_inventario->Text = L"Guardar";
			this->btn_guardar_inventario->UseVisualStyleBackColor = false;
			this->btn_guardar_inventario->Click += gcnew System::EventHandler(this, &ModificarInventario::btn_guardar_inventario_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(83, 226);
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
			this->label2->Location = System::Drawing::Point(83, 161);
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
			this->label1->Location = System::Drawing::Point(83, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre";
			// 
			// btn_eliminar_inventario
			// 
			this->btn_eliminar_inventario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->btn_eliminar_inventario->FlatAppearance->BorderSize = 0;
			this->btn_eliminar_inventario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar_inventario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_eliminar_inventario->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_eliminar_inventario->Location = System::Drawing::Point(436, 12);
			this->btn_eliminar_inventario->Name = L"btn_eliminar_inventario";
			this->btn_eliminar_inventario->Size = System::Drawing::Size(146, 40);
			this->btn_eliminar_inventario->TabIndex = 20;
			this->btn_eliminar_inventario->Text = L"Eliminar";
			this->btn_eliminar_inventario->UseVisualStyleBackColor = false;
			this->btn_eliminar_inventario->Click += gcnew System::EventHandler(this, &ModificarInventario::btn_eliminar_inventario_Click);
			// 
			// numeric_precio_unitario
			// 
			this->numeric_precio_unitario->DecimalPlaces = 2;
			this->numeric_precio_unitario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numeric_precio_unitario->Location = System::Drawing::Point(279, 229);
			this->numeric_precio_unitario->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_precio_unitario->Name = L"numeric_precio_unitario";
			this->numeric_precio_unitario->Size = System::Drawing::Size(248, 24);
			this->numeric_precio_unitario->TabIndex = 29;
			// 
			// numeric_cantidad
			// 
			this->numeric_cantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numeric_cantidad->Location = System::Drawing::Point(279, 165);
			this->numeric_cantidad->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->numeric_cantidad->Name = L"numeric_cantidad";
			this->numeric_cantidad->Size = System::Drawing::Size(248, 24);
			this->numeric_cantidad->TabIndex = 30;
			// 
			// ModificarInventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(605, 387);
			this->Controls->Add(this->numeric_cantidad);
			this->Controls->Add(this->numeric_precio_unitario);
			this->Controls->Add(this->btn_eliminar_inventario);
			this->Controls->Add(this->txt_nombre_inventario);
			this->Controls->Add(this->btn_cancelar_inventario);
			this->Controls->Add(this->btn_guardar_inventario);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModificarInventario";
			this->Text = L"Modificar Inventario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_precio_unitario))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_cantidad))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_guardar_inventario_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->txt_nombre_inventario->Text) || String::IsNullOrEmpty(this->numeric_cantidad->Text) || String::IsNullOrEmpty(this->numeric_precio_unitario->Text))
		{
			// El cuadro de texto está vacío
			MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
		}
		else
		{
			int cantidad = Convert::ToInt32(this->numeric_cantidad->Value);
			this->data->AbrirConexion();
			this->data->ModInventario(id, this->txt_nombre_inventario->Text, cantidad, this->numeric_precio_unitario->Value);
			this->data->CerrarConexion();
			this->Close();
		}
	}
	private: System::Void btn_eliminar_inventario_Click(System::Object^ sender, System::EventArgs^ e) {

		// Crea un formulario vacío (puede ser un formulario invisible)
		Form^ form = gcnew Form();

		System::Windows::Forms::DialogResult resultado = MessageBox::Show(form, "¿Estás seguro de que deseas eliminar este elemento?", "Advertencia", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			// El usuario hizo clic en "Aceptar", realiza la acción de eliminación
			this->data->AbrirConexion();
			this->data->EliminarInventario(id);
			this->data->CerrarConexion();
			MessageBox::Show("El elemento ha sido eliminado.", "Acción completada");
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
