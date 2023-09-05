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
	/// Resumen de ModificarVenta
	/// </summary>
	public ref class ModificarVenta : public System::Windows::Forms::Form
	{
	public:
		ModificarVenta(int id, String^ c, String^ h, String^ tp, Decimal p)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->id = id;
			this->txt_cliente->Text = c;
			this->txt_hora->Text = h;
			this->lista_tipo_pago->Text = tp;
			this->numeric_pago->Value = p;
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarVenta()
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


	private: int id;
	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::ComboBox^ lista_tipo_pago;
	private: System::Windows::Forms::NumericUpDown^ numeric_pago;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModificarVenta::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar_venta = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->txt_cliente = (gcnew System::Windows::Forms::TextBox());
			this->txt_hora = (gcnew System::Windows::Forms::TextBox());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->lista_tipo_pago = (gcnew System::Windows::Forms::ComboBox());
			this->numeric_pago = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_pago))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(83, 77);
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
			this->label2->Location = System::Drawing::Point(89, 141);
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
			this->label3->Location = System::Drawing::Point(57, 202);
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
			this->label4->Location = System::Drawing::Point(89, 261);
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
			this->btn_guardar_venta->Location = System::Drawing::Point(47, 324);
			this->btn_guardar_venta->Name = L"btn_guardar_venta";
			this->btn_guardar_venta->Size = System::Drawing::Size(146, 40);
			this->btn_guardar_venta->TabIndex = 4;
			this->btn_guardar_venta->Text = L"Guardar";
			this->btn_guardar_venta->UseVisualStyleBackColor = false;
			this->btn_guardar_venta->Click += gcnew System::EventHandler(this, &ModificarVenta::btn_guardar_venta_Click);
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
			this->btn_cancelar->Location = System::Drawing::Point(376, 324);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(146, 40);
			this->btn_cancelar->TabIndex = 5;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &ModificarVenta::btn_cancelar_Click);
			// 
			// txt_cliente
			// 
			this->txt_cliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cliente->Location = System::Drawing::Point(274, 79);
			this->txt_cliente->Name = L"txt_cliente";
			this->txt_cliente->Size = System::Drawing::Size(248, 24);
			this->txt_cliente->TabIndex = 6;
			// 
			// txt_hora
			// 
			this->txt_hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_hora->Location = System::Drawing::Point(274, 143);
			this->txt_hora->Name = L"txt_hora";
			this->txt_hora->Size = System::Drawing::Size(248, 24);
			this->txt_hora->TabIndex = 7;
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
			this->btn_eliminar->Location = System::Drawing::Point(437, 12);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(146, 40);
			this->btn_eliminar->TabIndex = 21;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &ModificarVenta::btn_eliminar_Click);
			// 
			// lista_tipo_pago
			// 
			this->lista_tipo_pago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lista_tipo_pago->FormattingEnabled = true;
			this->lista_tipo_pago->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mp", L"Efectivo" });
			this->lista_tipo_pago->Location = System::Drawing::Point(274, 202);
			this->lista_tipo_pago->Name = L"lista_tipo_pago";
			this->lista_tipo_pago->Size = System::Drawing::Size(248, 26);
			this->lista_tipo_pago->TabIndex = 22;
			// 
			// numeric_pago
			// 
			this->numeric_pago->DecimalPlaces = 2;
			this->numeric_pago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric_pago->Location = System::Drawing::Point(274, 261);
			this->numeric_pago->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 131072 });
			this->numeric_pago->Name = L"numeric_pago";
			this->numeric_pago->Size = System::Drawing::Size(248, 24);
			this->numeric_pago->TabIndex = 23;
			// 
			// ModificarVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(605, 387);
			this->Controls->Add(this->numeric_pago);
			this->Controls->Add(this->lista_tipo_pago);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->txt_hora);
			this->Controls->Add(this->txt_cliente);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar_venta);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModificarVenta";
			this->Text = L"Modificar Venta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_pago))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_guardar_venta_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->txt_cliente->Text) || String::IsNullOrEmpty(this->txt_hora->Text) || String::IsNullOrEmpty(this->lista_tipo_pago->Text) || String::IsNullOrEmpty(numeric_pago->Text))
		{
			// El cuadro de texto está vacío
			MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
		}
		else
		{
			//double pago = double::Parse(txt_pago->Text);
			this->data->AbrirConexion();
			this->data->ModVenta(id, this->txt_cliente->Text, this->txt_hora->Text, this->lista_tipo_pago->Text, numeric_pago->Value);
			this->data->CerrarConexion();
			this->Close();
		}
	}


	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crea un formulario vacío (puede ser un formulario invisible)
		Form^ form = gcnew Form();

		System::Windows::Forms::DialogResult resultado = MessageBox::Show(form, "¿Estás seguro de que deseas eliminar esta venta?", "Advertencia", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			// El usuario hizo clic en "Aceptar", realiza la acción de eliminación
			this->data->AbrirConexion();
			this->data->EliminarVenta(id);
			this->data->CerrarConexion();
			MessageBox::Show("La venta ha sido eliminada.", "Acción completada");
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
