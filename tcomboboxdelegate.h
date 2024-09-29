#ifndef TCOMBOBOXDELEGATE_H
// 防止头文件被重复包含
#define TCOMBOBOXDELEGATE_H
// 定义宏，防止头文件被重复包含

// 包含基类 QStyledItemDelegate 的头文件
#include <QStyledItemDelegate>
// 包含 QStyledItemDelegate 头文件

// 定义 TComboBoxDelegate 类
class TComboBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
    // 标记为 Qt 的元对象系统支持

private:
    QStringList m_itemList; // 选择列表
    // 存储下拉列表中的项
    bool m_editable;        // 是否可编辑
    // 表示下拉列表是否可编辑

public:
    // 构造函数，显式指定默认参数
    explicit TComboBoxDelegate(QObject *parent = nullptr);
    // 构造函数，显式指定默认参数 parent 为 nullptr

    // 自定义函数，初始化设置列表内容和是否可编辑
    void setItems(QStringList items, bool editable);
    // 初始化设置列表内容和是否可编辑

    // 自定义代理必须重新实现以下四个函数

    // 创建编辑组件
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;
    // 创建一个 QComboBox 编辑器
    // parent: 编辑器的父对象
    // option: 样式选项
    // index: 模型中的索引

    // 从数据模型获取数据，显示到代理组件中
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    // 设置编辑器的数据
    // editor: 编辑器对象
    // index: 模型中的索引

    // 将代理组件的数据保存到数据模型中
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;
    // 保存编辑器的数据到模型
    // editor: 编辑器对象
    // model: 数据模型
    // index: 模型中的索引

    // 更新代理编辑组件的大小
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const;
    // 更新编辑器的几何位置和大小
    // editor: 编辑器对象
    // option: 样式选项
    // index: 模型中的索引
};

#endif // TCOMBOBOXDELEGATE_H
// 结束防止重复包含的宏定义
