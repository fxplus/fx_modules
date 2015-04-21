<?php
/**
 * @file
 * fx_alerts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fx_alerts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'alerts';
  $context->description = 'Alerts that should appear on every user facing page';
  $context->tag = 'communication';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user_alert-user_alert' => array(
          'module' => 'user_alert',
          'delta' => 'user_alert',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Alerts that should appear on every user facing page');
  t('communication');
  $export['alerts'] = $context;

  return $export;
}
