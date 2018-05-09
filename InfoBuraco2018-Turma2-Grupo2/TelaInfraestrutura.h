#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaInfraestrutura
	/// </summary>
	public ref class TelaInfraestrutura : public System::Windows::Forms::Form
	{
	public:
		TelaInfraestrutura(void)
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
		~TelaInfraestrutura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tc_infraestrutura;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^  tp_equipamentos;


	private: System::Windows::Forms::TabPage^  tp_equipes;
	private: System::Windows::Forms::TabPage^  tp_materiais;
	private: System::Windows::Forms::Button^  bt_voltar;
	private: System::Windows::Forms::Button^  bt_removerEquipamento;
	private: System::Windows::Forms::Button^  bt_alterarEquipamento;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  bt_adicionarNovoEquipamento;
	private: System::Windows::Forms::Button^  bt_removerEquipe;
	private: System::Windows::Forms::Button^  bt_alterarEquipe;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  bt_adicionarNovaEquipe;
	private: System::Windows::Forms::Button^  bt_removerMaterial;
	private: System::Windows::Forms::Button^  bt_alterarMaterial;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  bt_adicionarNovoMaterial;















	protected:

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
			this->tc_infraestrutura = (gcnew System::Windows::Forms::TabControl());
			this->tp_equipamentos = (gcnew System::Windows::Forms::TabPage());
			this->bt_removerEquipamento = (gcnew System::Windows::Forms::Button());
			this->bt_alterarEquipamento = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->bt_adicionarNovoEquipamento = (gcnew System::Windows::Forms::Button());
			this->tp_equipes = (gcnew System::Windows::Forms::TabPage());
			this->bt_removerEquipe = (gcnew System::Windows::Forms::Button());
			this->bt_alterarEquipe = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->bt_adicionarNovaEquipe = (gcnew System::Windows::Forms::Button());
			this->tp_materiais = (gcnew System::Windows::Forms::TabPage());
			this->bt_removerMaterial = (gcnew System::Windows::Forms::Button());
			this->bt_alterarMaterial = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->bt_adicionarNovoMaterial = (gcnew System::Windows::Forms::Button());
			this->bt_voltar = (gcnew System::Windows::Forms::Button());
			this->tc_infraestrutura->SuspendLayout();
			this->tp_equipamentos->SuspendLayout();
			this->tp_equipes->SuspendLayout();
			this->tp_materiais->SuspendLayout();
			this->SuspendLayout();
			// 
			// tc_infraestrutura
			// 
			this->tc_infraestrutura->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tc_infraestrutura->Controls->Add(this->tp_equipamentos);
			this->tc_infraestrutura->Controls->Add(this->tp_equipes);
			this->tc_infraestrutura->Controls->Add(this->tp_materiais);
			this->tc_infraestrutura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tc_infraestrutura->Location = System::Drawing::Point(5, 12);
			this->tc_infraestrutura->Name = L"tc_infraestrutura";
			this->tc_infraestrutura->SelectedIndex = 0;
			this->tc_infraestrutura->Size = System::Drawing::Size(279, 264);
			this->tc_infraestrutura->TabIndex = 0;
			// 
			// tp_equipamentos
			// 
			this->tp_equipamentos->Controls->Add(this->bt_removerEquipamento);
			this->tp_equipamentos->Controls->Add(this->bt_alterarEquipamento);
			this->tp_equipamentos->Controls->Add(this->button11);
			this->tp_equipamentos->Controls->Add(this->bt_adicionarNovoEquipamento);
			this->tp_equipamentos->Location = System::Drawing::Point(4, 22);
			this->tp_equipamentos->Name = L"tp_equipamentos";
			this->tp_equipamentos->Padding = System::Windows::Forms::Padding(3);
			this->tp_equipamentos->Size = System::Drawing::Size(271, 238);
			this->tp_equipamentos->TabIndex = 0;
			this->tp_equipamentos->Text = L"Equipamentos";
			this->tp_equipamentos->UseVisualStyleBackColor = true;
			// 
			// bt_removerEquipamento
			// 
			this->bt_removerEquipamento->Location = System::Drawing::Point(175, 160);
			this->bt_removerEquipamento->Name = L"bt_removerEquipamento";
			this->bt_removerEquipamento->Size = System::Drawing::Size(90, 34);
			this->bt_removerEquipamento->TabIndex = 11;
			this->bt_removerEquipamento->Text = L"Remover equipamento";
			this->bt_removerEquipamento->UseVisualStyleBackColor = true;
			// 
			// bt_alterarEquipamento
			// 
			this->bt_alterarEquipamento->Location = System::Drawing::Point(175, 102);
			this->bt_alterarEquipamento->Name = L"bt_alterarEquipamento";
			this->bt_alterarEquipamento->Size = System::Drawing::Size(90, 34);
			this->bt_alterarEquipamento->TabIndex = 10;
			this->bt_alterarEquipamento->Text = L"Alterar equipamento";
			this->bt_alterarEquipamento->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(5, 10);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(164, 218);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Placeholder até aprendermos a mexer com database";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// bt_adicionarNovoEquipamento
			// 
			this->bt_adicionarNovoEquipamento->Location = System::Drawing::Point(175, 44);
			this->bt_adicionarNovoEquipamento->Name = L"bt_adicionarNovoEquipamento";
			this->bt_adicionarNovoEquipamento->Size = System::Drawing::Size(90, 35);
			this->bt_adicionarNovoEquipamento->TabIndex = 8;
			this->bt_adicionarNovoEquipamento->Text = L"Adicionar novo equipamento";
			this->bt_adicionarNovoEquipamento->UseVisualStyleBackColor = true;
			// 
			// tp_equipes
			// 
			this->tp_equipes->Controls->Add(this->bt_removerEquipe);
			this->tp_equipes->Controls->Add(this->bt_alterarEquipe);
			this->tp_equipes->Controls->Add(this->button4);
			this->tp_equipes->Controls->Add(this->bt_adicionarNovaEquipe);
			this->tp_equipes->Location = System::Drawing::Point(4, 22);
			this->tp_equipes->Name = L"tp_equipes";
			this->tp_equipes->Padding = System::Windows::Forms::Padding(3);
			this->tp_equipes->Size = System::Drawing::Size(271, 238);
			this->tp_equipes->TabIndex = 1;
			this->tp_equipes->Text = L"Equipes";
			this->tp_equipes->UseVisualStyleBackColor = true;
			// 
			// bt_removerEquipe
			// 
			this->bt_removerEquipe->Location = System::Drawing::Point(175, 160);
			this->bt_removerEquipe->Name = L"bt_removerEquipe";
			this->bt_removerEquipe->Size = System::Drawing::Size(90, 34);
			this->bt_removerEquipe->TabIndex = 11;
			this->bt_removerEquipe->Text = L"Remover equipe";
			this->bt_removerEquipe->UseVisualStyleBackColor = true;
			// 
			// bt_alterarEquipe
			// 
			this->bt_alterarEquipe->Location = System::Drawing::Point(175, 102);
			this->bt_alterarEquipe->Name = L"bt_alterarEquipe";
			this->bt_alterarEquipe->Size = System::Drawing::Size(90, 34);
			this->bt_alterarEquipe->TabIndex = 10;
			this->bt_alterarEquipe->Text = L"Alterar equipe";
			this->bt_alterarEquipe->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(5, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 218);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Placeholder até aprendermos a mexer com database";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// bt_adicionarNovaEquipe
			// 
			this->bt_adicionarNovaEquipe->Location = System::Drawing::Point(175, 44);
			this->bt_adicionarNovaEquipe->Name = L"bt_adicionarNovaEquipe";
			this->bt_adicionarNovaEquipe->Size = System::Drawing::Size(90, 35);
			this->bt_adicionarNovaEquipe->TabIndex = 8;
			this->bt_adicionarNovaEquipe->Text = L"Adicionar nova equipe";
			this->bt_adicionarNovaEquipe->UseVisualStyleBackColor = true;
			// 
			// tp_materiais
			// 
			this->tp_materiais->Controls->Add(this->bt_removerMaterial);
			this->tp_materiais->Controls->Add(this->bt_alterarMaterial);
			this->tp_materiais->Controls->Add(this->button8);
			this->tp_materiais->Controls->Add(this->bt_adicionarNovoMaterial);
			this->tp_materiais->Location = System::Drawing::Point(4, 22);
			this->tp_materiais->Name = L"tp_materiais";
			this->tp_materiais->Padding = System::Windows::Forms::Padding(3);
			this->tp_materiais->Size = System::Drawing::Size(271, 238);
			this->tp_materiais->TabIndex = 2;
			this->tp_materiais->Text = L"Materiais";
			this->tp_materiais->UseVisualStyleBackColor = true;
			this->tp_materiais->Click += gcnew System::EventHandler(this, &TelaInfraestrutura::tp_materiais_Click);
			// 
			// bt_removerMaterial
			// 
			this->bt_removerMaterial->Location = System::Drawing::Point(175, 160);
			this->bt_removerMaterial->Name = L"bt_removerMaterial";
			this->bt_removerMaterial->Size = System::Drawing::Size(90, 34);
			this->bt_removerMaterial->TabIndex = 11;
			this->bt_removerMaterial->Text = L"Remover material";
			this->bt_removerMaterial->UseVisualStyleBackColor = true;
			// 
			// bt_alterarMaterial
			// 
			this->bt_alterarMaterial->Location = System::Drawing::Point(175, 102);
			this->bt_alterarMaterial->Name = L"bt_alterarMaterial";
			this->bt_alterarMaterial->Size = System::Drawing::Size(90, 34);
			this->bt_alterarMaterial->TabIndex = 10;
			this->bt_alterarMaterial->Text = L"Alterar material";
			this->bt_alterarMaterial->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(5, 10);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(164, 218);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Placeholder até aprendermos a mexer com database";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// bt_adicionarNovoMaterial
			// 
			this->bt_adicionarNovoMaterial->Location = System::Drawing::Point(175, 44);
			this->bt_adicionarNovoMaterial->Name = L"bt_adicionarNovoMaterial";
			this->bt_adicionarNovoMaterial->Size = System::Drawing::Size(90, 35);
			this->bt_adicionarNovoMaterial->TabIndex = 8;
			this->bt_adicionarNovoMaterial->Text = L"Adicionar novo material";
			this->bt_adicionarNovoMaterial->UseVisualStyleBackColor = true;
			// 
			// bt_voltar
			// 
			this->bt_voltar->Location = System::Drawing::Point(5, 282);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(85, 29);
			this->bt_voltar->TabIndex = 1;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = true;
			// 
			// TelaInfraestrutura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 315);
			this->Controls->Add(this->bt_voltar);
			this->Controls->Add(this->tc_infraestrutura);
			this->Name = L"TelaInfraestrutura";
			this->Text = L"TelaInfraestrutura";
			this->Load += gcnew System::EventHandler(this, &TelaInfraestrutura::TelaInfraestrutura_Load);
			this->tc_infraestrutura->ResumeLayout(false);
			this->tp_equipamentos->ResumeLayout(false);
			this->tp_equipes->ResumeLayout(false);
			this->tp_materiais->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void tp_materiais_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void TelaInfraestrutura_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
