#pragma once
#include "Productos.h"
#include "Inventario.h"
#include "Ventas.h"

namespace Hamburgueseria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	protected:
	private: System::Windows::Forms::Panel^ panel_izq;
	private: System::Windows::Forms::Panel^ panel_margen_izq;
	private: System::Windows::Forms::Panel^ panel_bajo;
	private: System::Windows::Forms::Panel^ panel_contenedor;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_productos;
	private: System::Windows::Forms::Button^ btn_ventas;
	private: System::Windows::Forms::Button^ btn_inventario;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel_izq = (gcnew System::Windows::Forms::Panel());
			this->btn_ventas = (gcnew System::Windows::Forms::Button());
			this->btn_inventario = (gcnew System::Windows::Forms::Button());
			this->btn_productos = (gcnew System::Windows::Forms::Button());
			this->panel_margen_izq = (gcnew System::Windows::Forms::Panel());
			this->panel_bajo = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_izq->SuspendLayout();
			this->panel_contenedor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_izq
			// 
			this->panel_izq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->panel_izq->Controls->Add(this->btn_ventas);
			this->panel_izq->Controls->Add(this->btn_inventario);
			this->panel_izq->Controls->Add(this->btn_productos);
			this->panel_izq->Controls->Add(this->panel_margen_izq);
			this->panel_izq->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_izq->Location = System::Drawing::Point(0, 0);
			this->panel_izq->Name = L"panel_izq";
			this->panel_izq->Size = System::Drawing::Size(225, 608);
			this->panel_izq->TabIndex = 0;
			// 
			// btn_ventas
			// 
			this->btn_ventas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->btn_ventas->FlatAppearance->BorderSize = 0;
			this->btn_ventas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ventas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ventas->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_ventas->Location = System::Drawing::Point(0, 312);
			this->btn_ventas->Name = L"btn_ventas";
			this->btn_ventas->Size = System::Drawing::Size(225, 52);
			this->btn_ventas->TabIndex = 3;
			this->btn_ventas->Text = L"Ventas";
			this->btn_ventas->UseVisualStyleBackColor = false;
			this->btn_ventas->Click += gcnew System::EventHandler(this, &Inicio::btn_ventas_Click);
			// 
			// btn_inventario
			// 
			this->btn_inventario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->btn_inventario->FlatAppearance->BorderSize = 0;
			this->btn_inventario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_inventario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inventario->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_inventario->Location = System::Drawing::Point(0, 228);
			this->btn_inventario->Name = L"btn_inventario";
			this->btn_inventario->Size = System::Drawing::Size(225, 52);
			this->btn_inventario->TabIndex = 2;
			this->btn_inventario->Text = L"Inventario";
			this->btn_inventario->UseVisualStyleBackColor = false;
			this->btn_inventario->Click += gcnew System::EventHandler(this, &Inicio::btn_inventario_Click);
			// 
			// btn_productos
			// 
			this->btn_productos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->btn_productos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_productos->FlatAppearance->BorderSize = 0;
			this->btn_productos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_productos->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_productos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_productos->Location = System::Drawing::Point(0, 145);
			this->btn_productos->Name = L"btn_productos";
			this->btn_productos->Size = System::Drawing::Size(225, 52);
			this->btn_productos->TabIndex = 1;
			this->btn_productos->Text = L"Productos";
			this->btn_productos->UseVisualStyleBackColor = false;
			this->btn_productos->Click += gcnew System::EventHandler(this, &Inicio::btn_productos_Click);
			// 
			// panel_margen_izq
			// 
			this->panel_margen_izq->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen_izq->Location = System::Drawing::Point(0, 0);
			this->panel_margen_izq->Name = L"panel_margen_izq";
			this->panel_margen_izq->Size = System::Drawing::Size(225, 145);
			this->panel_margen_izq->TabIndex = 0;
			// 
			// panel_bajo
			// 
			this->panel_bajo->BackColor = System::Drawing::Color::Black;
			this->panel_bajo->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_bajo->Location = System::Drawing::Point(225, 555);
			this->panel_bajo->Name = L"panel_bajo";
			this->panel_bajo->Size = System::Drawing::Size(920, 53);
			this->panel_bajo->TabIndex = 1;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->BackColor = System::Drawing::Color::Black;
			this->panel_contenedor->Controls->Add(this->pictureBox1);
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(225, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(920, 555);
			this->panel_contenedor->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(249, 82);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(452, 467);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(1145, 608);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_bajo);
			this->Controls->Add(this->panel_izq);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Inicio";
			this->Text = L"La Cabaña Food";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->panel_izq->ResumeLayout(false);
			this->panel_contenedor->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		Form^ actual;

		void AbrirFormulario(Form^ hijo) {
			if (this->actual != nullptr) {
				this->actual->Close();
			}
			this->actual = hijo;
			hijo->Dock = DockStyle::Fill;
			hijo->TopLevel = false;
			panel_contenedor->Controls->Add(hijo);
			hijo->Show();
	}

	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void btn_productos_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1 != nullptr)
		{
			pictureBox1->Visible = false;
		}
		this->AbrirFormulario(gcnew Hamburgueseria::Productos);
	}
	
	private: System::Void btn_inventario_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1 != nullptr)
		{
			pictureBox1->Visible = false;
		}
		this->AbrirFormulario(gcnew Hamburgueseria::Inventario);
	}
	
	private: System::Void btn_ventas_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1 != nullptr)
		{
			pictureBox1->Visible = false;
		}
		this->AbrirFormulario(gcnew Hamburgueseria::Ventas);
	}
};
}
