#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuDespachador
	/// </summary>
	public ref class MenuDespachador : public System::Windows::Forms::Form
	{
	public:
		MenuDespachador(void)
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
		~MenuDespachador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_infraestrutura;
	protected:
	private: System::Windows::Forms::Button^  bt_listaDeBuracos;
	private: System::Windows::Forms::Button^  bt_listaDeOS;
	private: System::Windows::Forms::Button^  bt_formulaçãoDePlanoDeSaída;
	private: System::Windows::Forms::Button^  bt_históricoDeSaídas;
	private: System::Windows::Forms::Button^  bt_históricoDePagamentos;
	private: System::Windows::Forms::Label^  label1;

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
			this->bt_infraestrutura = (gcnew System::Windows::Forms::Button());
			this->bt_listaDeBuracos = (gcnew System::Windows::Forms::Button());
			this->bt_listaDeOS = (gcnew System::Windows::Forms::Button());
			this->bt_formulaçãoDePlanoDeSaída = (gcnew System::Windows::Forms::Button());
			this->bt_históricoDeSaídas = (gcnew System::Windows::Forms::Button());
			this->bt_históricoDePagamentos = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_infraestrutura
			// 
			this->bt_infraestrutura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_infraestrutura->Location = System::Drawing::Point(57, 76);
			this->bt_infraestrutura->Name = L"bt_infraestrutura";
			this->bt_infraestrutura->Size = System::Drawing::Size(202, 50);
			this->bt_infraestrutura->TabIndex = 0;
			this->bt_infraestrutura->TabStop = false;
			this->bt_infraestrutura->Text = L"Infraestrutura";
			this->bt_infraestrutura->UseVisualStyleBackColor = true;
			// 
			// bt_listaDeBuracos
			// 
			this->bt_listaDeBuracos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_listaDeBuracos->Location = System::Drawing::Point(57, 161);
			this->bt_listaDeBuracos->Name = L"bt_listaDeBuracos";
			this->bt_listaDeBuracos->Size = System::Drawing::Size(202, 50);
			this->bt_listaDeBuracos->TabIndex = 1;
			this->bt_listaDeBuracos->Text = L"Lista de Buracos";
			this->bt_listaDeBuracos->UseVisualStyleBackColor = true;
			// 
			// bt_listaDeOS
			// 
			this->bt_listaDeOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_listaDeOS->Location = System::Drawing::Point(57, 245);
			this->bt_listaDeOS->Name = L"bt_listaDeOS";
			this->bt_listaDeOS->Size = System::Drawing::Size(202, 50);
			this->bt_listaDeOS->TabIndex = 2;
			this->bt_listaDeOS->Text = L"Lista de OS";
			this->bt_listaDeOS->UseVisualStyleBackColor = true;
			// 
			// bt_formulaçãoDePlanoDeSaída
			// 
			this->bt_formulaçãoDePlanoDeSaída->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_formulaçãoDePlanoDeSaída->Location = System::Drawing::Point(302, 76);
			this->bt_formulaçãoDePlanoDeSaída->Name = L"bt_formulaçãoDePlanoDeSaída";
			this->bt_formulaçãoDePlanoDeSaída->Size = System::Drawing::Size(202, 50);
			this->bt_formulaçãoDePlanoDeSaída->TabIndex = 3;
			this->bt_formulaçãoDePlanoDeSaída->Text = L"Formulação de plano de saída";
			this->bt_formulaçãoDePlanoDeSaída->UseVisualStyleBackColor = true;
			// 
			// bt_históricoDeSaídas
			// 
			this->bt_históricoDeSaídas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->bt_históricoDeSaídas->Location = System::Drawing::Point(302, 161);
			this->bt_históricoDeSaídas->Name = L"bt_históricoDeSaídas";
			this->bt_históricoDeSaídas->Size = System::Drawing::Size(202, 50);
			this->bt_históricoDeSaídas->TabIndex = 4;
			this->bt_históricoDeSaídas->Text = L"Histórico de Saídas";
			this->bt_históricoDeSaídas->UseVisualStyleBackColor = true;
			// 
			// bt_históricoDePagamentos
			// 
			this->bt_históricoDePagamentos->Location = System::Drawing::Point(302, 245);
			this->bt_históricoDePagamentos->Name = L"bt_históricoDePagamentos";
			this->bt_históricoDePagamentos->Size = System::Drawing::Size(202, 50);
			this->bt_históricoDePagamentos->TabIndex = 5;
			this->bt_históricoDePagamentos->Text = L"Histórico de Pagamentos";
			this->bt_históricoDePagamentos->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(214, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Menu Principal";
			this->label1->Click += gcnew System::EventHandler(this, &MenuDespachador::label1_Click);
			// 
			// MenuDespachador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 339);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bt_históricoDePagamentos);
			this->Controls->Add(this->bt_históricoDeSaídas);
			this->Controls->Add(this->bt_formulaçãoDePlanoDeSaída);
			this->Controls->Add(this->bt_listaDeOS);
			this->Controls->Add(this->bt_listaDeBuracos);
			this->Controls->Add(this->bt_infraestrutura);
			this->Name = L"MenuDespachador";
			this->Text = L"MenuDespachador";
			this->Load += gcnew System::EventHandler(this, &MenuDespachador::MenuDespachador_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuDespachador_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
