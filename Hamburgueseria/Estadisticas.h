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
	/// Resumen de Estadisticas
	/// </summary>
	public ref class Estadisticas : public System::Windows::Forms::Form
	{
	public:
		Estadisticas(void)
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
		~Estadisticas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Ganancia;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ graficos_ventas;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ grafico_h;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_total_h;
	private: System::Windows::Forms::TextBox^ txt_total_simple;
	private: System::Windows::Forms::TextBox^ txt_total_doble;
	private: System::Windows::Forms::TextBox^ txt_total_triple;




	private: System::Windows::Forms::TextBox^ txt_n_ventas;
	private: System::Windows::Forms::TextBox^ txt_ganancia;
	private: System::Windows::Forms::TextBox^ txt_total_mp;
	private: System::Windows::Forms::TextBox^ txt_total_efectivo;

	private: DB^ data;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_total_inventario;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Ganancia = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->graficos_ventas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->grafico_h = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_total_h = (gcnew System::Windows::Forms::TextBox());
			this->txt_total_simple = (gcnew System::Windows::Forms::TextBox());
			this->txt_total_doble = (gcnew System::Windows::Forms::TextBox());
			this->txt_total_triple = (gcnew System::Windows::Forms::TextBox());
			this->txt_n_ventas = (gcnew System::Windows::Forms::TextBox());
			this->txt_ganancia = (gcnew System::Windows::Forms::TextBox());
			this->txt_total_mp = (gcnew System::Windows::Forms::TextBox());
			this->txt_total_efectivo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_total_inventario = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graficos_ventas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grafico_h))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(342, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Estadisticas";
			// 
			// Ganancia
			// 
			this->Ganancia->AutoSize = true;
			this->Ganancia->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ganancia->ForeColor = System::Drawing::Color::White;
			this->Ganancia->Location = System::Drawing::Point(97, 188);
			this->Ganancia->Name = L"Ganancia";
			this->Ganancia->Size = System::Drawing::Size(105, 22);
			this->Ganancia->TabIndex = 2;
			this->Ganancia->Text = L"Ganancia";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"N° ventas a la fecha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(114, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Total Mp";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(69, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Total Efectivo";
			// 
			// graficos_ventas
			// 
			this->graficos_ventas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			chartArea1->Name = L"ChartArea1";
			this->graficos_ventas->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->ForeColor = System::Drawing::Color::White;
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->graficos_ventas->Legends->Add(legend1);
			this->graficos_ventas->Location = System::Drawing::Point(482, 71);
			this->graficos_ventas->Name = L"graficos_ventas";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->graficos_ventas->Series->Add(series1);
			this->graficos_ventas->Size = System::Drawing::Size(376, 238);
			this->graficos_ventas->TabIndex = 6;
			this->graficos_ventas->Text = L"Ventas";
			this->graficos_ventas->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			// 
			// grafico_h
			// 
			this->grafico_h->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			chartArea2->Name = L"ChartArea1";
			this->grafico_h->ChartAreas->Add(chartArea2);
			legend2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			legend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend2->ForeColor = System::Drawing::Color::White;
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			this->grafico_h->Legends->Add(legend2);
			this->grafico_h->Location = System::Drawing::Point(482, 338);
			this->grafico_h->Name = L"grafico_h";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->grafico_h->Series->Add(series2);
			this->grafico_h->Size = System::Drawing::Size(376, 173);
			this->grafico_h->TabIndex = 7;
			this->grafico_h->Text = L"chart1";
			this->grafico_h->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(147, 486);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 22);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Triple";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(143, 448);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Doble";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(145, 411);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 22);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Simple";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(1, 368);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(326, 22);
			this->label7->TabIndex = 12;
			this->label7->Text = L"N° meda. vendidas hasta la fecha";
			// 
			// txt_total_h
			// 
			this->txt_total_h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_total_h->Location = System::Drawing::Point(333, 367);
			this->txt_total_h->Name = L"txt_total_h";
			this->txt_total_h->ReadOnly = true;
			this->txt_total_h->Size = System::Drawing::Size(100, 26);
			this->txt_total_h->TabIndex = 13;
			// 
			// txt_total_simple
			// 
			this->txt_total_simple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_total_simple->Location = System::Drawing::Point(333, 407);
			this->txt_total_simple->Name = L"txt_total_simple";
			this->txt_total_simple->ReadOnly = true;
			this->txt_total_simple->Size = System::Drawing::Size(100, 26);
			this->txt_total_simple->TabIndex = 14;
			// 
			// txt_total_doble
			// 
			this->txt_total_doble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_total_doble->Location = System::Drawing::Point(333, 444);
			this->txt_total_doble->Name = L"txt_total_doble";
			this->txt_total_doble->ReadOnly = true;
			this->txt_total_doble->Size = System::Drawing::Size(100, 26);
			this->txt_total_doble->TabIndex = 15;
			// 
			// txt_total_triple
			// 
			this->txt_total_triple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_total_triple->Location = System::Drawing::Point(333, 485);
			this->txt_total_triple->Name = L"txt_total_triple";
			this->txt_total_triple->ReadOnly = true;
			this->txt_total_triple->Size = System::Drawing::Size(100, 26);
			this->txt_total_triple->TabIndex = 16;
			// 
			// txt_n_ventas
			// 
			this->txt_n_ventas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_n_ventas->Location = System::Drawing::Point(305, 80);
			this->txt_n_ventas->Name = L"txt_n_ventas";
			this->txt_n_ventas->ReadOnly = true;
			this->txt_n_ventas->Size = System::Drawing::Size(100, 26);
			this->txt_n_ventas->TabIndex = 17;
			// 
			// txt_ganancia
			// 
			this->txt_ganancia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ganancia->Location = System::Drawing::Point(305, 184);
			this->txt_ganancia->Name = L"txt_ganancia";
			this->txt_ganancia->ReadOnly = true;
			this->txt_ganancia->Size = System::Drawing::Size(100, 26);
			this->txt_ganancia->TabIndex = 18;
			// 
			// txt_total_mp
			// 
			this->txt_total_mp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_total_mp->Location = System::Drawing::Point(305, 246);
			this->txt_total_mp->Name = L"txt_total_mp";
			this->txt_total_mp->ReadOnly = true;
			this->txt_total_mp->Size = System::Drawing::Size(100, 26);
			this->txt_total_mp->TabIndex = 19;
			// 
			// txt_total_efectivo
			// 
			this->txt_total_efectivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_total_efectivo->Location = System::Drawing::Point(305, 283);
			this->txt_total_efectivo->Name = L"txt_total_efectivo";
			this->txt_total_efectivo->ReadOnly = true;
			this->txt_total_efectivo->Size = System::Drawing::Size(100, 26);
			this->txt_total_efectivo->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(60, 142);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(152, 22);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Inventario total";
			// 
			// txt_total_inventario
			// 
			this->txt_total_inventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_total_inventario->Location = System::Drawing::Point(305, 138);
			this->txt_total_inventario->Name = L"txt_total_inventario";
			this->txt_total_inventario->ReadOnly = true;
			this->txt_total_inventario->Size = System::Drawing::Size(100, 26);
			this->txt_total_inventario->TabIndex = 22;
			// 
			// Estadisticas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(904, 516);
			this->Controls->Add(this->txt_total_inventario);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_total_efectivo);
			this->Controls->Add(this->txt_total_mp);
			this->Controls->Add(this->txt_ganancia);
			this->Controls->Add(this->txt_n_ventas);
			this->Controls->Add(this->txt_total_triple);
			this->Controls->Add(this->txt_total_doble);
			this->Controls->Add(this->txt_total_simple);
			this->Controls->Add(this->txt_total_h);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->grafico_h);
			this->Controls->Add(this->graficos_ventas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Ganancia);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Estadisticas";
			this->Text = L"Estadisticas";
			this->Load += gcnew System::EventHandler(this, &Estadisticas::Estadisticas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graficos_ventas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grafico_h))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void Consulta()
	{
		this->data->AbrirConexion();
		this->txt_n_ventas->Text = Convert::ToString(this->data->getTotalVentas());
		Int32 inventario = this->data->getTotalInventario();
		Int32 totalEfectivo = this->data->getTotalEfectivo();
		Int32 totalMp = this->data->getTotalMp();
		Int32 simple = this->data->getTotalSimple();
		Int32 doble = this->data->getTotalDoble();
		Int32 triple = this->data->getTotalTriple();
		this->data->CerrarConexion();
		this->txt_total_efectivo->Text = "$" + Convert::ToString(totalEfectivo);
		this->txt_total_mp->Text = "$" + Convert::ToString(totalMp);
		this->txt_total_simple->Text = Convert::ToString(simple);
		this->txt_total_doble->Text = Convert::ToString(doble);
		this->txt_total_triple->Text = Convert::ToString(triple);
		this->txt_total_inventario->Text = "$" + Convert::ToString(inventario);
		this->txt_ganancia->Text = "$" + Convert::ToString( (totalEfectivo + totalMp) - inventario);
		this->txt_total_h->Text = Convert::ToString(simple+(2*doble)+(3*triple));

		graficos_ventas->Series[0]->Points->Add(totalEfectivo)->LegendText = "Efectivo";
		graficos_ventas->Series[0]->Points->Add(totalMp)->LegendText = "MercadoPago";

		grafico_h->Series[0]->Points->Add(simple)->LegendText = "Simple";
		grafico_h->Series[0]->Points->Add(doble)->LegendText = "Doble";
		grafico_h->Series[0]->Points->Add(triple)->LegendText = "Triple";
	} 
	private: System::Void Estadisticas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	} 
	};
}
