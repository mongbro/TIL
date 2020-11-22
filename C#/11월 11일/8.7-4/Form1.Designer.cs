namespace _8._7_4
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.btn_radio = new System.Windows.Forms.RadioButton();
            this.list_radio = new System.Windows.Forms.RadioButton();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // btn_radio
            // 
            this.btn_radio.AutoSize = true;
            this.btn_radio.Location = new System.Drawing.Point(21, 27);
            this.btn_radio.Name = "btn_radio";
            this.btn_radio.Size = new System.Drawing.Size(115, 16);
            this.btn_radio.TabIndex = 0;
            this.btn_radio.TabStop = true;
            this.btn_radio.Text = "버튼 기반 컨트롤";
            this.btn_radio.UseVisualStyleBackColor = true;
            this.btn_radio.CheckedChanged += new System.EventHandler(this.btn_radio_CheckedChanged);
            // 
            // list_radio
            // 
            this.list_radio.AutoSize = true;
            this.list_radio.Location = new System.Drawing.Point(21, 72);
            this.list_radio.Name = "list_radio";
            this.list_radio.Size = new System.Drawing.Size(127, 16);
            this.list_radio.TabIndex = 0;
            this.list_radio.TabStop = true;
            this.list_radio.Text = "리스트 기반 컨트롤";
            this.list_radio.UseVisualStyleBackColor = true;
            this.list_radio.CheckedChanged += new System.EventHandler(this.list_radio_CheckedChanged);
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 12;
            this.listBox1.Location = new System.Drawing.Point(154, 24);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(120, 64);
            this.listBox1.TabIndex = 1;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(297, 106);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.list_radio);
            this.Controls.Add(this.btn_radio);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RadioButton btn_radio;
        private System.Windows.Forms.RadioButton list_radio;
        private System.Windows.Forms.ListBox listBox1;
    }
}

