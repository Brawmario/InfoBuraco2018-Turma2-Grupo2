#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaHistóricoDeSaídas
	/// </summary>
	public ref class TelaHistóricoDeSaídas : public System::Windows::Forms::Form
	{
	public:
		TelaHistóricoDeSaídas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaHistóricoDeSaídas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_aplicarFiltros;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  bt_voltar;

	private: System::Windows::Forms::Label^  lb_até;
	private: System::Windows::Forms::Label^  lb_de;
	private: System::Windows::Forms::MaskedTextBox^  mtb_dataFinal;

	private: System::Windows::Forms::MaskedTextBox^  mtb_dataInicial;



	private: System::Windows::Forms::Label^  lb_históricoDeSaídas;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bt_aplicarFiltros = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bt_voltar = (gcnew System::Windows::Forms::Button());
			this->lb_até = (gcnew System::Windows::Forms::Label());
			this->lb_de = (gcnew System::Windows::Forms::Label());
			this->mtb_dataFinal = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtb_dataInicial = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lb_históricoDeSaídas = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_aplicarFiltros
			// 
			this->bt_aplicarFiltros->Location = System::Drawing::Point(294, 79);
			this->bt_aplicarFiltros->Name = L"bt_aplicarFiltros";
			this->bt_aplicarFiltros->Size = System::Drawing::Size(78, 22);
			this->bt_aplicarFiltros->TabIndex = 13;
			this->bt_aplicarFiltros->Text = L"Aplicar Filtros";
			this->bt_aplicarFiltros->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(79, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 134);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Placeholder até aprendermos a mexer com database";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// bt_voltar
			// 
			this->bt_voltar->Location = System::Drawing::Point(3, 33);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(61, 19);
			this->bt_voltar->TabIndex = 11;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = true;
			this->bt_voltar->Click += gcnew System::EventHandler(this, &TelaHistóricoDeSaídas::bt_voltar_Click);
			// 
			// lb_até
			// 
			this->lb_até->AutoSize = true;
			this->lb_até->Location = System::Drawing::Point(169, 84);
			this->lb_até->Name = L"lb_até";
			this->lb_até->Size = System::Drawing::Size(26, 13);
			this->lb_até->TabIndex = 10;
			this->lb_até->Text = L"Até:";
			// 
			// lb_de
			// 
			this->lb_de->AutoSize = true;
			this->lb_de->Location = System::Drawing::Point(49, 84);
			this->lb_de->Name = L"lb_de";
			this->lb_de->Size = System::Drawing::Size(24, 13);
			this->lb_de->TabIndex = 9;
			this->lb_de->Text = L"De:";
			// 
			// mtb_dataFinal
			// 
			this->mtb_dataFinal->Location = System::Drawing::Point(201, 81);
			this->mtb_dataFinal->Mask = L"00/00/0000";
			this->mtb_dataFinal->Name = L"mtb_dataFinal";
			this->mtb_dataFinal->Size = System::Drawing::Size(65, 20);
			this->mtb_dataFinal->TabIndex = 8;
			this->mtb_dataFinal->ValidatingType = System::DateTime::typeid;
			// 
			// mtb_dataInicial
			// 
			this->mtb_dataInicial->Location = System::Drawing::Point(79, 81);
			this->mtb_dataInicial->Mask = L"00/00/0000";
			this->mtb_dataInicial->Name = L"mtb_dataInicial";
			this->mtb_dataInicial->Size = System::Drawing::Size(65, 20);
			this->mtb_dataInicial->TabIndex = 7;
			this->mtb_dataInicial->ValidatingType = System::DateTime::typeid;
			// 
			// lb_históricoDeSaídas
			// 
			this->lb_históricoDeSaídas->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lb_históricoDeSaídas->AutoSize = true;
			this->lb_históricoDeSaídas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_históricoDeSaídas->Location = System::Drawing::Point(125, 24);
			this->lb_históricoDeSaídas->Name = L"lb_históricoDeSaídas";
			this->lb_históricoDeSaídas->Size = System::Drawing::Size(130, 17);
			this->lb_históricoDeSaídas->TabIndex = 14;
			this->lb_históricoDeSaídas->Text = L"Histórico de Saídas";
			// 
			// TelaHistóricoDeSaídas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 329);
			this->Controls->Add(this->lb_históricoDeSaídas);
			this->Controls->Add(this->bt_aplicarFiltros);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bt_voltar);
			this->Controls->Add(this->lb_até);
			this->Controls->Add(this->lb_de);
			this->Controls->Add(this->mtb_dataFinal);
			this->Controls->Add(this->mtb_dataInicial);
			this->Name = L"TelaHistóricoDeSaídas";
			this->Text = L"TelaHistóricoDeSaídas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_voltar_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
