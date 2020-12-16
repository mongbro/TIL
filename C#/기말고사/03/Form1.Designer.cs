namespace _03
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
            this.apply = new System.Windows.Forms.CheckBox();
            this.button1 = new System.Windows.Forms.Button();
            this.color = new System.Windows.Forms.CheckBox();
            this.fontDialog1 = new System.Windows.Forms.FontDialog();
            this.SuspendLayout();
            // 
            // apply
            // 
            this.apply.AutoSize = true;
            this.apply.Location = new System.Drawing.Point(35, 43);
            this.apply.Name = "apply";
            this.apply.Size = new System.Drawing.Size(48, 16);
            this.apply.TabIndex = 0;
            this.apply.Text = "적용";
            this.apply.UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(35, 97);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(140, 23);
            this.button1.TabIndex = 1;
            this.button1.Text = "글꼴 대화상자 열기";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // color
            // 
            this.color.AutoSize = true;
            this.color.Location = new System.Drawing.Point(127, 43);
            this.color.Name = "color";
            this.color.Size = new System.Drawing.Size(48, 16);
            this.color.TabIndex = 2;
            this.color.Text = "색상";
            this.color.UseVisualStyleBackColor = true;
            // 
            // fontDialog1
            // 
            this.fontDialog1.Apply += new System.EventHandler(this.fontDialog1_Apply);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(207, 152);
            this.Controls.Add(this.color);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.apply);
            this.Name = "Form1";
            this.Text = "Exam4";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckBox apply;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.CheckBox color;
        private System.Windows.Forms.FontDialog fontDialog1;
    }
}

