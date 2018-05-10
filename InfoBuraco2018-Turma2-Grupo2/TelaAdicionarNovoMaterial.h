#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAdicionarNovoMaterial
	/// </summary>
	public ref class TelaAdicionarNovoMaterial : public System::Windows::Forms::Form
	{
	public:
		TelaAdicionarNovoMaterial(void)
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
		~TelaAdicionarNovoMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_nome;
	protected:
	private: System::Windows::Forms::Label^  lb_custoPorUnidade;
	private: System::Windows::Forms::Label^  lb_unidade;
	private: System::Windows::Forms::Label^  lb_adicionarNovoMaterial;
	private: System::Windows::Forms::Button^  bt_cancelar;
	private: System::Windows::Forms::Button^  bt_finalizar;
	private: System::Windows::Forms::TextBox^  tb_nome;
	private: System::Windows::Forms::TextBox^  tb_custoPorUnidade;
	private: System::Windows::Forms::TextBox^  tb_unidade;


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
			this->lb_nome = (gcnew System::Windows::Forms::Label());
			this->lb_custoPorUnidade = (gcnew System::Windows::Forms::Label());
			this->lb_unidade = (gcnew System::Windows::Forms::Label());
			this->lb_adicionarNovoMaterial = (gcnew System::Windows::Forms::Label());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->tb_nome = (gcnew System::Windows::Forms::TextBox());
			this->tb_custoPorUnidade = (gcnew System::Windows::Forms::TextBox());
			this->tb_unidade = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lb_nome
			// 
			this->lb_nome->AutoSize = true;
			this->lb_nome->Location = System::Drawing::Point(82, 61);
			this->lb_nome->Name = L"lb_nome";
			this->lb_nome->Size = System::Drawing::Size(38, 13);
			this->lb_nome->TabIndex = 0;
			this->lb_nome->Text = L"Nome:";
			// 
			// lb_custoPorUnidade
			// 
			this->lb_custoPorUnidade->AutoSize = true;
			this->lb_custoPorUnidade->Location = System::Drawing::Point(24, 104);
			this->lb_custoPorUnidade->Name = L"lb_custoPorUnidade";
			this->lb_custoPorUnidade->Size = System::Drawing::Size(96, 13);
			this->lb_custoPorUnidade->TabIndex = 1;
			this->lb_custoPorUnidade->Text = L"Custo por unidade:";
			// 
			// lb_unidade
			// 
			this->lb_unidade->AutoSize = true;
			this->lb_unidade->Location = System::Drawing::Point(70, 146);
			this->lb_unidade->Name = L"lb_unidade";
			this->lb_unidade->Size = System::Drawing::Size(50, 13);
			this->lb_unidade->TabIndex = 2;
			this->lb_unidade->Text = L"Unidade:";
			// 
			// lb_adicionarNovoMaterial
			// 
			this->lb_adicionarNovoMaterial->AutoSize = true;
			this->lb_adicionarNovoMaterial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_adicionarNovoMaterial->Location = System::Drawing::Point(61, 18);
			this->lb_adicionarNovoMaterial->Name = L"lb_adicionarNovoMaterial";
			this->lb_adicionarNovoMaterial->Size = System::Drawing::Size(158, 17);
			this->lb_adicionarNovoMaterial->TabIndex = 8;
			this->lb_adicionarNovoMaterial->Text = L"Adicionar Novo Material";
			this->lb_adicionarNovoMaterial->Click += gcnew System::EventHandler(this, &TelaAdicionarNovoMaterial::lb_históricoDePagamentos_Click);
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->Location = System::Drawing::Point(41, 188);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(68, 23);
			this->bt_cancelar->TabIndex = 9;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			this->bt_cancelar->Click += gcnew System::EventHandler(this, &TelaAdicionarNovoMaterial::bt_cancelar_Click);
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(168, 188);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(70, 22);
			this->bt_finalizar->TabIndex = 10;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			this->bt_finalizar->Click += gcnew System::EventHandler(this, &TelaAdicionarNovoMaterial::bt_finalizar_Click);
			// 
			// tb_nome
			// 
			this->tb_nome->Location = System::Drawing::Point(126, 58);
			this->tb_nome->MaxLength = 20;
			this->tb_nome->Name = L"tb_nome";
			this->tb_nome->Size = System::Drawing::Size(90, 20);
			this->tb_nome->TabIndex = 11;
			// 
			// tb_custoPorUnidade
			// 
			this->tb_custoPorUnidade->Location = System::Drawing::Point(126, 101);
			this->tb_custoPorUnidade->Name = L"tb_custoPorUnidade";
			this->tb_custoPorUnidade->Size = System::Drawing::Size(90, 20);
			this->tb_custoPorUnidade->TabIndex = 12;
			// 
			// tb_unidade
			// 
			this->tb_unidade->Location = System::Drawing::Point(126, 143);
			this->tb_unidade->Name = L"tb_unidade";
			this->tb_unidade->Size = System::Drawing::Size(90, 20);
			this->tb_unidade->TabIndex = 13;
			// 
			// TelaAdicionarNovoMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 238);
			this->Controls->Add(this->tb_unidade);
			this->Controls->Add(this->tb_custoPorUnidade);
			this->Controls->Add(this->tb_nome);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->lb_adicionarNovoMaterial);
			this->Controls->Add(this->lb_unidade);
			this->Controls->Add(this->lb_custoPorUnidade);
			this->Controls->Add(this->lb_nome);
			this->Name = L"TelaAdicionarNovoMaterial";
			this->Text = L"TelaAdicionarNovoMaterial";
			this->Load += gcnew System::EventHandler(this, &TelaAdicionarNovoMaterial::TelaAdicionarNovoMaterial_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaAdicionarNovoMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void lb_históricoDePagamentos_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bt_cancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void bt_finalizar_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
