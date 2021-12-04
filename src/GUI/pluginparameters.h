#ifndef PLUGINPARAMETERS_H
#define PLUGINPARAMETERS_H

#include <QWidget>
#include <QVariantMap>

class PluginParameters : public QWidget
{
	Q_OBJECT

public:
	PluginParameters(const QString &plugin,
	  const QMap<QString, QVariantMap> &params, QWidget *parent = 0);

	const QMap<QString, QVariantMap> &parameters() const {return _params;}

public slots:
	void setPlugin(const QString &plugin);

private slots:
	void saveParameters();

private:
	QMap<QString, QVariantMap> _params;
	QString _plugin;
};

#endif // PLUGINPARAMETERS_H
