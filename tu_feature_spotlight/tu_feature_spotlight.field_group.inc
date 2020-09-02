<?php
/**
 * @file
 * tu_feature_spotlight.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tu_feature_spotlight_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tu_spotlight_subject|bean|tu_spotlight|form';
  $field_group->group_name = 'group_tu_spotlight_subject';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'tu_spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subject',
    'weight' => '38',
    'children' => array(
      0 => 'field_tu_spotlight_name',
      1 => 'field_tu_spotlight_attribution',
      2 => 'field_tu_spotlight_label_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tu-spotlight-subject field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tu_spotlight_subject|bean|tu_spotlight|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Subject');

  return $field_groups;
}
