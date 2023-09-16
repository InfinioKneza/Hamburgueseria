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
		ModificarVenta(int id, String^ c, String^ h, String^ tp)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->id = id;
			this->txt_cliente->Text = c;
			clienteViejo = c;
			this->txt_hora->Text = h;
			this->lista_tipo_pago->Text = tp;
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

	protected:


	private: int id;
	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ lista_tipo_pago;
	private: System::Windows::Forms::TextBox^ txt_hora;
	private: System::Windows::Forms::TextBox^ txt_cliente;
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Button^ btn_guardar_venta;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: int NumericPorGrupo = 3; // Cantidad de NumericUpDown por grupo
	private: array<NumericUpDown^>^ numericArray;
	private: DataTable^ dataTable;
	private: String^ clienteViejo; //Para verificar si cambia el nombre del cliente



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
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lista_tipo_pago = (gcnew System::Windows::Forms::ComboBox());
			this->txt_hora = (gcnew System::Windows::Forms::TextBox());
			this->txt_cliente = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_guardar_venta = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->btn_eliminar->Location = System::Drawing::Point(30, 22);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(146, 40);
			this->btn_eliminar->TabIndex = 21;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &ModificarVenta::btn_eliminar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(1148, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 24);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Triple";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(995, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 24);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Doble";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(842, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 24);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Simple";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Location = System::Drawing::Point(523, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(758, 375);
			this->panel1->TabIndex = 30;
			// 
			// lista_tipo_pago
			// 
			this->lista_tipo_pago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lista_tipo_pago->FormattingEnabled = true;
			this->lista_tipo_pago->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mp", L"Efectivo" });
			this->lista_tipo_pago->Location = System::Drawing::Point(247, 235);
			this->lista_tipo_pago->Name = L"lista_tipo_pago";
			this->lista_tipo_pago->Size = System::Drawing::Size(248, 26);
			this->lista_tipo_pago->TabIndex = 29;
			// 
			// txt_hora
			// 
			this->txt_hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_hora->Location = System::Drawing::Point(247, 186);
			this->txt_hora->Name = L"txt_hora";
			this->txt_hora->Size = System::Drawing::Size(248, 24);
			this->txt_hora->TabIndex = 28;
			// 
			// txt_cliente
			// 
			this->txt_cliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cliente->Location = System::Drawing::Point(247, 141);
			this->txt_cliente->Name = L"txt_cliente";
			this->txt_cliente->Size = System::Drawing::Size(248, 24);
			this->txt_cliente->TabIndex = 27;
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
			this->btn_cancelar->Location = System::Drawing::Point(331, 340);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(146, 40);
			this->btn_cancelar->TabIndex = 26;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &ModificarVenta::btn_cancelar_Click);
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
			this->btn_guardar_venta->Location = System::Drawing::Point(30, 340);
			this->btn_guardar_venta->Name = L"btn_guardar_venta";
			this->btn_guardar_venta->Size = System::Drawing::Size(146, 40);
			this->btn_guardar_venta->TabIndex = 25;
			this->btn_guardar_venta->Text = L"Guardar";
			this->btn_guardar_venta->UseVisualStyleBackColor = false;
			this->btn_guardar_venta->Click += gcnew System::EventHandler(this, &ModificarVenta::btn_guardar_venta_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(31, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 24);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Tipo de pago";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(64, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 24);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Hora";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(57, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 24);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Cliente";
			// 
			// ModificarVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(1311, 430);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lista_tipo_pago);
			this->Controls->Add(this->txt_hora);
			this->Controls->Add(this->txt_cliente);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar_venta);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_eliminar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModificarVenta";
			this->Text = L"Modificar Venta";
			this->Load += gcnew System::EventHandler(this, &ModificarVenta::ModificarVenta_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ModificarVenta_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}
	
	public: void Consulta()
	{
		int simple = 0, doble = 0, triple = 0;
		//Obtengo la tabla con los datos necesarios
		this->data->AbrirConexion();
		dataTable = this->data->getDataTableProductos();
		this->data->CerrarConexion();

		//Arreglo de todos los numericupdown
		numericArray = gcnew array<NumericUpDown^>((dataTable->Rows->Count) * NumericPorGrupo);

		//En base a la tabla de productos creo los label con sus respectivos cuadros de ingreso de numero (NumericUpDown)
		for (int i = 0; i < dataTable->Rows->Count; i++) {

			Label^ label = gcnew Label();
			label->Text = dataTable->Rows[i]->default["Nombre"]->ToString();
			label->Location = Point(10, i * 30);
			label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label->ForeColor = System::Drawing::SystemColors::ButtonFace;
			label->AutoSize = true;

			//Creo cada numericupdown para simple, doble y triple
			for (int j = 0; j < NumericPorGrupo; j++) {

				NumericUpDown^ num = gcnew NumericUpDown();
				num->Location = Point(300 + j * 150, i * 30);
				this->data->AbrirConexion();
				switch (j) {
				case 0:
					num->Value = this->data->getSimpleCliente(dataTable->Rows[i]->default["Nombre"]->ToString(), this->txt_cliente->Text);
					break;
				case 1:
					num->Value = this->data->getDobleCliente(dataTable->Rows[i]->default["Nombre"]->ToString(), this->txt_cliente->Text);
					break;
				case 2:
					num->Value = this->data->getTripleCliente(dataTable->Rows[i]->default["Nombre"]->ToString(), this->txt_cliente->Text);
					break;
				}
				this->data->CerrarConexion();
				panel1->Controls->Add(label);
				panel1->Controls->Add(num);

				numericArray[i * NumericPorGrupo + j] = num;
			}

		}

	}

	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crea un formulario vacío (puede ser un formulario invisible)
		Form^ form = gcnew Form();

		System::Windows::Forms::DialogResult resultado = MessageBox::Show(form, "¿Estás seguro de que deseas eliminar esta venta?", "Advertencia", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			// El usuario hizo clic en "Aceptar", realiza la acción de eliminación
			this->data->AbrirConexion();
			this->data->EliminarVenta(id,clienteViejo);
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

	private: System::Void btn_guardar_venta_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->txt_cliente->Text) || String::IsNullOrEmpty(this->txt_hora->Text) || String::IsNullOrEmpty(this->lista_tipo_pago->Text))
		{
			// El cuadro de texto está vacío
			MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
		}
		else
		{
			if (String::IsNullOrEmpty(this->txt_cliente->Text) || String::IsNullOrEmpty(this->txt_hora->Text) || String::IsNullOrEmpty(this->lista_tipo_pago->Text))
			{
				// El cuadro de texto está vacío
				MessageBox::Show("Rellene todos los campos porfavor", "Advertencia");
			}
			else
			{
				int simple = 0, doble = 0, triple = 0;
				double total = 0;

				//Obtengo la tabla con los datos necesarios
				this->data->AbrirConexion();
				dataTable = this->data->getDataTableProductos();
				this->data->CerrarConexion();

				for (int i = 0; i < dataTable->Rows->Count; i++) {
					//Saco el dato de los 3 primeros NumericUpDown y lo guardo en las variables simple, doble y triple
					for (int j = 0; j < NumericPorGrupo; j++) {
						switch (j) {
						case 0:
							simple = Convert::ToInt32(numericArray[i * NumericPorGrupo + j]->Value);
							break;
						case 1:
							doble = Convert::ToInt32(numericArray[i * NumericPorGrupo + j]->Value);
							break;
						case 2:
							triple = Convert::ToInt32(numericArray[i * NumericPorGrupo + j]->Value);
							break;
						}
					}

					if ((simple != 0) || (doble != 0) || (triple != 0)) {
						this->data->AbrirConexion();
						total += Convert::ToDouble(this->data->getTotalVentaHamburguesa(dataTable->Rows[i]->default["Nombre"]->ToString(), simple, doble, triple));
						this->data->CerrarConexion();
					}

					this->data->AbrirConexion();
					this->data->ModVentaHamburguesa(clienteViejo, this->txt_cliente->Text, dataTable->Rows[i]->default["Nombre"]->ToString(), simple, doble, triple);
					this->data->CerrarConexion();

					//Reinicio variables
					simple = 0;
					doble = 0;
					triple = 0;

				}
				this->data->AbrirConexion();
				this->data->ModVenta(id,this->txt_cliente->Text, this->txt_hora->Text, this->lista_tipo_pago->Text, Convert::ToDecimal(total));
				this->data->CerrarConexion();
				this->Close();
			}
		}
	}
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
