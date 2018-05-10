#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAlterarEquipamento
	/// </summary>
	public ref class TelaAlterarEquipamento : public System::Windows::Forms::Form
	{
	public:
		TelaAlterarEquipamento(void)
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
		~TelaAlterarEquipamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  cb_alterarIdentificação;
	private: System::Windows::Forms::CheckBox^  cb_alterarCustoDeUso;
	private: System::Windows::Forms::TextBox^  tb_novaIdentificação;
	private: System::Windows::Forms::Label^  lb_novaIdentificação;
	private: System::Windows::Forms::Label^  lb_novoCustoDeUso;
	private: System::Windows::Forms::TextBox^  tb_novoCustoDeUso;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bt_cancelar;
	private: System::Windows::Forms::Button^  bt_finalizar;


	protected:





	protected:

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
			this->cb_alterarIdentificação = (gcnew System::Windows::Forms::CheckBox());
			this->cb_alterarCustoDeUso = (gcnew System::Windows::Forms::CheckBox());
			this->tb_novaIdentificação = (gcnew System::Windows::Forms::TextBox());
			this->lb_novaIdentificação = (gcnew System::Windows::Forms::Label());
			this->lb_novoCustoDeUso = (gcnew System::Windows::Forms::Label());
			this->tb_novoCustoDeUso = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cb_alterarIdentificação
			// 
			this->cb_alterarIdentificação->AutoSize = true;
			this->cb_alterarIdentificação->Location = System::Drawing::Point(21, 63);
			this->cb_alterarIdentificação->Name = L"cb_alterarIdentificação";
			this->cb_alterarIdentificação->Size = System::Drawing::Size(120, 17);
			this->cb_alterarIdentificação->TabIndex = 0;
			this->cb_alterarIdentificação->TabStop = false;
			this->cb_alterarIdentificação->Text = L"Alterar Identificação";
			this->cb_alterarIdentificação->UseVisualStyleBackColor = true;
			this->cb_alterarIdentificação->CheckedChanged += gcnew System::EventHandler(this, &TelaAlterarEquipamento::checkBox1_CheckedChanged);
			this->cb_alterarIdentificação->Click += gcnew System::EventHandler(this, &TelaAlterarEquipamento::checkBox1_CheckedChanged);
			// 
			// cb_alterarCustoDeUso
			// 
			this->cb_alterarCustoDeUso->AutoSize = true;
			this->cb_alterarCustoDeUso->Location = System::Drawing::Point(21, 131);
			this->cb_alterarCustoDeUso->Name = L"cb_alterarCustoDeUso";
			this->cb_alterarCustoDeUso->Size = System::Drawing::Size(120, 17);
			this->cb_alterarCustoDeUso->TabIndex = 1;
			this->cb_alterarCustoDeUso->Text = L"Alterar custo de uso";
			this->cb_alterarCustoDeUso->UseVisualStyleBackColor = true;
			this->cb_alterarCustoDeUso->Click += gcnew System::EventHandler(this, &TelaAlterarEquipamento::checkBox2_CheckedChange);
			// 
			// tb_novaIdentificação
			// 
			this->tb_novaIdentificação->Enabled = false;
			this->tb_novaIdentificação->Location = System::Drawing::Point(124, 86);
			this->tb_novaIdentificação->MaxLength = 5;
			this->tb_novaIdentificação->Name = L"tb_novaIdentificação";
			this->tb_novaIdentificação->Size = System::Drawing::Size(119, 20);
			this->tb_novaIdentificação->TabIndex = 2;
			this->tb_novaIdentificação->TextChanged += gcnew System::EventHandler(this, &TelaAlterarEquipamento::tb_novaIdentificação_TextChanged);
			// 
			// lb_novaIdentificação
			// 
			this->lb_novaIdentificação->AutoSize = true;
			this->lb_novaIdentificação->Enabled = false;
			this->lb_novaIdentificação->Location = System::Drawing::Point(18, 89);
			this->lb_novaIdentificação->Name = L"lb_novaIdentificação";
			this->lb_novaIdentificação->Size = System::Drawing::Size(100, 13);
			this->lb_novaIdentificação->TabIndex = 3;
			this->lb_novaIdentificação->Text = L"Nova Identificação:";
			// 
			// lb_novoCustoDeUso
			// 
			this->lb_novoCustoDeUso->AutoSize = true;
			this->lb_novoCustoDeUso->Enabled = false;
			this->lb_novoCustoDeUso->Location = System::Drawing::Point(18, 157);
			this->lb_novoCustoDeUso->Name = L"lb_novoCustoDeUso";
			this->lb_novoCustoDeUso->Size = System::Drawing::Size(100, 13);
			this->lb_novoCustoDeUso->TabIndex = 5;
			this->lb_novoCustoDeUso->Text = L"Novo custo de uso:";
			// 
			// tb_novoCustoDeUso
			// 
			this->tb_novoCustoDeUso->Enabled = false;
			this->tb_novoCustoDeUso->Location = System::Drawing::Point(124, 154);
			this->tb_novoCustoDeUso->Name = L"tb_novoCustoDeUso";
			this->tb_novoCustoDeUso->Size = System::Drawing::Size(119, 20);
			this->tb_novoCustoDeUso->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(71, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Alterar Equipamento";
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->bt_cancelar->Location = System::Drawing::Point(31, 215);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(86, 24);
			this->bt_cancelar->TabIndex = 7;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			this->bt_cancelar->Click += gcnew System::EventHandler(this, &TelaAlterarEquipamento::bt_cancelar_Click);
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(148, 215);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(86, 24);
			this->bt_finalizar->TabIndex = 8;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			this->bt_finalizar->Click += gcnew System::EventHandler(this, &TelaAlterarEquipamento::bt_finalizar_Click);
			// 
			// TelaAlterarEquipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lb_novoCustoDeUso);
			this->Controls->Add(this->tb_novoCustoDeUso);
			this->Controls->Add(this->lb_novaIdentificação);
			this->Controls->Add(this->tb_novaIdentificação);
			this->Controls->Add(this->cb_alterarCustoDeUso);
			this->Controls->Add(this->cb_alterarIdentificação);
			this->Name = L"TelaAlterarEquipamento";
			this->Text = L"TelaAlterarEquipamento";
			this->Load += gcnew System::EventHandler(this, &TelaAlterarEquipamento::TelaAlterarEquipamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->tb_novaIdentificação->Enabled = this->cb_alterarIdentificação->Checked;
		this->lb_novaIdentificação->Enabled = this->cb_alterarIdentificação->Checked;
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tb_novaIdentificação_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void checkBox2_CheckedChange(System::Object^  sender, System::EventArgs^  e) {
	this->tb_novoCustoDeUso->Enabled = this->cb_alterarCustoDeUso->Checked;
	this->lb_novoCustoDeUso->Enabled = this->cb_alterarCustoDeUso->Checked;
}
private: System::Void TelaAlterarEquipamento_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_cancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bt_finalizar_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
