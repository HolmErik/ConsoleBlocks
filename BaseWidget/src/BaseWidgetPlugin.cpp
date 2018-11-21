#include "BaseWidget.h"
#include "BaseWidgetPlugin.h"

#include <QtCore/QtPlugin>

BaseWidgetPlugin::BaseWidgetPlugin(QObject *parent)
	: QObject(parent)
{
	initialized = false;
}

void BaseWidgetPlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
	if (initialized)
		return;

	initialized = true;
}

bool BaseWidgetPlugin::isInitialized() const
{
	return initialized;
}

QWidget *BaseWidgetPlugin::createWidget(QWidget *parent)
{
	return new BaseWidget(parent);
}

QString BaseWidgetPlugin::name() const
{
	return "BaseWidget";
}

QString BaseWidgetPlugin::group() const
{
	return "My Plugins";
}

QIcon BaseWidgetPlugin::icon() const
{
	return QIcon();
}

QString BaseWidgetPlugin::toolTip() const
{
	return QString();
}

QString BaseWidgetPlugin::whatsThis() const
{
	return QString();
}

bool BaseWidgetPlugin::isContainer() const
{
	return false;
}

QString BaseWidgetPlugin::domXml() const
{
	return "<widget class=\"BaseWidget\" name=\"baseWidget\">\n"
		" <property name=\"geometry\">\n"
		"  <rect>\n"
		"   <x>0</x>\n"
		"   <y>0</y>\n"
		"   <width>100</width>\n"
		"   <height>100</height>\n"
		"  </rect>\n"
		" </property>\n"
		"</widget>\n";
}

QString BaseWidgetPlugin::includeFile() const
{
	return "BaseWidget.h";
}
