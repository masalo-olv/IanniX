#include "uirenderoptions.h"

QFileInfo Global::pathApplication;
QFileInfo Global::pathDocuments;
QFileInfo Global::pathCurrent;
UiTextureItems* Global::textures;
UiColorItems*   Global::colors;
QMap<QString, QColor> Global::defaultColors;
NxRect  Global::selectionArea;
NxRect  Global::axisArea;
NxPoint Global::axisCenter;
NxPoint Global::axisCenterDest;
NxPoint Global::rotation;
NxPoint Global::rotationDest;
QFont   Global::renderFont;
UiBool  Global::paintAxisGrid          = true;
UiBool  Global::paintCurvesOpacity     = false;
UiBool  Global::paintThisGroup         = false;
UiBool  Global::paintLabel             = true;
UiBool  Global::allowSelection         = false;
UiBool  Global::allowSelectionCursors  = true;
UiBool  Global::allowSelectionCurves   = true;
UiBool  Global::allowSelectionTriggers = true;
UiBool  Global::allowPlaySelected      = false;
UiBool  Global::triggerAutosize        = false;
UiBool  Global::forceLists             = false;
UiBool  Global::forceTexture           = false;
UiBool  Global::forceFrustumInInit     = false;
UiBool  Global::colorTheme             = true;
UiBool  Global::allowLockPos           = false;
UiBool  Global::mouseSnapX             = false;
UiBool  Global::mouseSnapY             = false;
UiBool  Global::mouseSnapZ             = false;
UiReal  Global::followId               = 9999;
qreal   Global::objectSize             = 1;
qreal   Global::zoomValue              = 1;
qreal   Global::zoomLinear             = 1;
qreal   Global::zoomLinearDest         = 1;
qreal   Global::axisGrid               = 1;
EditingMode Global::editingMode        = EditingModeFree;
bool    Global::editing                = false;
bool    Global::editingFirstPoint      = false;

UiString Global::defaultMessageTrigger   = QString("osc://ip_out:57120/trigger trigger_id trigger_group_id trigger_value_x trigger_value_y trigger_value_z trigger_xPos trigger_yPos trigger_zPos cursor_id cursor_group_id, midi://midi_out/notef 1 trigger_value_y trigger_value_x 3, tcp:// trigger trigger_id trigger_group_id trigger_value_x trigger_value_y trigger_value_z trigger_xPos trigger_yPos trigger_zPos cursor_id cursor_group_id");
UiString Global::defaultMessageCursor    = QString("osc://ip_out:57120/cursor cursor_id cursor_group_id cursor_value_x cursor_value_y cursor_value_z cursor_xPos cursor_yPos cursor_zPos, tcp:// cursor cursor_id cursor_group_id cursor_value_x cursor_value_y cursor_value_z cursor_xPos cursor_yPos cursor_zPos");
UiString Global::defaultMessageCurve     = QString("osc://ip_out:57120/curve collision_curve_id collision_curve_group_id collision_value_x collision_value_y 0 collision_xPos collision_yPos 0, tcp:// curve collision_curve_id collision_curve_group_id collision_value_x collision_value_y 0 collision_xPos collision_yPos 0");
UiString Global::defaultMessageTransport = QString("osc://ip_out:57120/transport status global_time global_time_verbose nb_triggers nb_cursors nb_curves, tcp:// transport status nb_triggers nb_cursors nb_curves");
UiString Global::defaultMessageSync      = QString("osc://ip_out:57120/iannix/ status");
UiString Global::defaultMessage          = QString("osc://ip_out:57120/object trigger_id trigger_group_id cursor_id cursor_group_id");

