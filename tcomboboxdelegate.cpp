#include "tcomboboxdelegate.h"
#include <QComboBox>

// 构造函数
TComboBoxDelegate::TComboBoxDelegate(QObject *parent) : QStyledItemDelegate(parent)
{
    // 初始化成员变量
}

// 设置下拉框的项目列表和是否可编辑
void TComboBoxDelegate::setItems(QStringList items, bool editable)
{
    m_itemList = items;  // 设置项目列表
    m_editable = editable;  // 设置是否可编辑
}

// 创建编辑器（下拉框）
QWidget *TComboBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                         const QModelIndex &index) const
{
    Q_UNUSED(option);  // 忽略 option 参数
    Q_UNUSED(index);  // 忽略 index 参数

    QComboBox *editor = new QComboBox(parent);  // 创建一个新的 QComboBox 对象
    editor->setEditable(m_editable);  // 设置是否可编辑

    // 从字符串列表初始化下拉列表
    for (int i = 0; i < m_itemList.count(); i++)
        editor->addItem(m_itemList.at(i));

    return editor;  // 返回创建的编辑器
}

// 设置编辑器的数据
void TComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QString str = index.model()->data(index, Qt::EditRole).toString();  // 获取模型中的数据

    QComboBox *comboBox = static_cast<QComboBox*>(editor);  // 将编辑器转换为 QComboBox
    comboBox->setCurrentText(str);  // 设置当前文本
}

// 将编辑器的数据设置到模型中
void TComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                     const QModelIndex &index) const
{
    QComboBox *comboBox = static_cast<QComboBox*>(editor);  // 将编辑器转换为 QComboBox

    QString str = comboBox->currentText();  // 获取当前文本

    model->setData(index, str, Qt::EditRole);  // 将数据设置到模型中
}

// 更新编辑器的几何位置
void TComboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                             const QModelIndex &index) const
{
    Q_UNUSED(index);  // 忽略 index 参数

    editor->setGeometry(option.rect);  // 设置编辑器的位置和大小
}
