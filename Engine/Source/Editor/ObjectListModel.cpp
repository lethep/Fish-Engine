#include "ObjectListModel.hpp"

ObjectListModel::ObjectListModel(QObject *parent)
    : QAbstractListModel(parent)
{

}

int ObjectListModel::rowCount(const QModelIndex &parent) const
{
    return 0;
}

QVariant ObjectListModel::data(const QModelIndex &index, int role) const
{
    return QVariant();
}